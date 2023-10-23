/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:38:00 by anoukan           #+#    #+#             */
/*   Updated: 23/10/2023 12:18:16 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t  i;
    char    *csrc;
    char    *cdst;

    i = -1;
    csrc = (char *)src;
    cdst = (char *)dst;
    while(++i < n)
        *cdst = *csrc;
    return (dst);

}
