//
// Created by boy67 on 5/4/2024.
//

#include "../../includes/minitalk.h"

Client **init_waitlist(void)
{
    Client **waitlist;

    waitlist = (Client **)malloc(sizeof (Client *) + 1);
    if(!waitlist)
        ft_error(1);
    *waitlist = NULL;
    return (waitlist);
}