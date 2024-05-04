//
// Created by boy67 on 5/4/2024.
//
// add client to the wait list

#include "../../includes/minitalk.h"

void    add_client(Client **waitlist, pid_t pid)
{
    Client *new;
    Client *top;

    top = *waitlist;
    new = (Client *)malloc(sizeof(Client));
    if (!new)
        free_waitlist(waitlist);
    if(new)
    {
        new->current_char = (char *)malloc(sizeof(char) * 2);
        if(!new->current_char)
            free_waitlist(waitlist);
        new->pid = pid;
        new->bit = 0;
        new->bit_received = 0;
        new->current_char[1] = '\0';
        new->next = NULL;
    }
    while(top)
        top = top->next;
    top = new;
}
