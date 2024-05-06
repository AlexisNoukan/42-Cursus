/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_client.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:00:37 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/06 12:03:34 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by boy67 on 5/4/2024.
//
#include "../../includes/minitalk.h"

Client *find_client(pid_t client, Client **list)
{
    Client *temp;
    Client *target;

    temp = *list;
    if (temp != NULL)
    {
        target = temp;
        while (temp->next != NULL && temp->pid != client )
            temp = temp->next;
        if(temp->pid == client)
        {
            target = temp;
            return (target);
        }
    }
    return (NULL);
}