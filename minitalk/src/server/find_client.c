/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_client.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:05:27 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/17 13:07:58 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

Client *find_client(pid_t client, Client **list)
{
    Client *temp;

    if(!*list)
        return(NULL);
    temp = *list;
    while (temp)
    {
        if (temp->pid == client)
            return (temp);
        temp = temp->next;
    }
    return (NULL);
}