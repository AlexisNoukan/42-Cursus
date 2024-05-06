/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_client.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:06:26 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/06 13:25:57 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    new->current_char = (char *)malloc(sizeof(char) * 2);
    if(!new->current_char)
        free_waitlist(waitlist);
    new->message = (char *)malloc(sizeof(char));
    if(!new->message)
        free_waitlist(waitlist);
    new->message[0] = '\0';
    new->pid = pid;
    new->bit = 0;
    new->bit_received = 0;
    new->current_char[0] = 0;
    new->current_char[1] = '\0';
    new->next = NULL;
    new->next = top;
    *waitlist = new;
}
