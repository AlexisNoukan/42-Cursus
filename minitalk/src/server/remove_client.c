//
// Created by boy67 on 5/4/2024.
//

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
