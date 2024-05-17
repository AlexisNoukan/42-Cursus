/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_message.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:32:00 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/17 10:09:27 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void print_message(Client *client, Client **waitlist)
{
    if(client)
    {
        ft_printf("%s", client->message);
        ft_printf("\nbits received: %d from: %d\n", client->bit_received, client->pid);
        remove_client(client, waitlist);
    }
}