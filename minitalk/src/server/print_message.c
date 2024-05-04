//
// Created by boy67 on 5/4/2024.
//
// add message to the client

#include "../../includes/minitalk.h"

void print_message(Client *client)
{
    ft_printf("%s", client->message);
    ft_printf("\nbits received: %d from: %d\n", client->bit_received, client->pid);
}