/ * ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_client.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:27:02 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/14 12:27:02 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void remove_client(Client *to_remove, Client **waitlist)
{
    Client *temp;
    Client *prev;

    temp = *waitlist;
    while (temp != to_remove)
    {
        if (temp->next == to_remove)
            prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);
}
