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
        while (temp->pid != client && temp->next != NULL)
            temp = temp->next;
        if(temp->pid == client)
            target = temp;
    }
    else
        return (NULL);
    return (target);
}