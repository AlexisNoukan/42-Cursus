/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_waitlist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 09:19:25 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/14 09:19:25 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

Client **init_waitlist(void )
{
    Client **waitlist;

    waitlist = (Client **)malloc(sizeof (Client *) + 1);
    if(!waitlist)
        ft_error(1);
    *waitlist = NULL;
    return (waitlist);
}