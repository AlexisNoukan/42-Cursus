//
// Created by boy67 on 5/4/2024.
//

#include "../../includes/minitalk.h"

void free_waitlist(Client **waitlist)
{
    free(waitlist);
    ft_error(1);
}