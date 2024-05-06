/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_message.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:27:10 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/06 12:27:10 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by boy67 on 5/4/2024.
//
// add message to the client

#include "../../includes/minitalk.h"

void print_message(Client *client)
{
    if (client)
    {
        ft_printf("%s", client->message);
        ft_printf("\nbits received: %d from: %d\n", client->bit_received, client->pid);
    }
}