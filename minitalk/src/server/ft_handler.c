/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:14:15 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/06 13:21:53 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    if (current_client == NULL)
    {
        add_client(waitlist, info->si_pid);
        current_client = find_client(info->si_pid, waitlist);
    }
    current_client->current_char[0] |= (signum == SIGUSR1);
    current_client->bit_received++;
    current_client->bit++;
    if (current_client->bit == 8)
    {
        current_client->message = ft_strjoin_frees1(current_client->message, current_client->current_char);
        if(current_client->current_char[0] == '\0')
        {
            print_message(current_client);
            if (kill(current_client->pid, SIGUSR2) == -1)
                ft_error(1);
        }
        current_client->bit = 0;
        current_client->current_char[0] = 0;
    }
    else
        current_client->current_char[0] <<= 1;
    usleep(100);
    if (kill(current_client->pid, SIGUSR1) == -1)
        ft_error(1);
}
