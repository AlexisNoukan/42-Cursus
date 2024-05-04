//
// Created by boy67 on 5/4/2024.
//

#include "../../includes/minitalk.h"

void server_handler(int signum, siginfo_t *info, void *context)
{
    static Client **waitlist;
    Client *current_client;

    (void)context;
    if(!waitlist)
        waitlist = init_waitlist();
    current_client = find_client(info->si_pid, waitlist);
    if (!current_client)
    {
        add_client(waitlist, info->si_pid);
        current_client = find_client(current_client->pid, waitlist);
    }
    current_client->current_char[0] |= (signum == SIGUSR1);
    current_client->bit_received++;
    current_client->bit++;
    if (current_client->bit == 8)
    {
        if(current_client->current_char[0] == '\0')
            print_message(current_client);
        current_client->bit = 0;
        current_client->current_char[0] = 0;
    }
    else
        current_client->current_char[0] <<= 1;
    usleep(100);
    if (kill(current_client->pid, SIGUSR1) == -1)
        ft_error(0);
}
