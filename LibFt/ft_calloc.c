/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*  ft_calloc.c                                           :+:     :+:    :+:  */
/*                                                      +:+ +:+        +:+    */
/*  By: anoukan <anoukan@student.42mulhouse.fr>       +#+  +:+      +#+       */
/*                                                  +#+#+#+#+#+  +#+          */
/*  Created: 23/10/2023 17:26:08 by anoukan              #+#   #+#            */
/*  Updated: 23/10/2023 17:26:08 by anoukan             ###  ##########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *i;

    i = malloc(count * size);
    if (i)
        ft_bzero(i, count * size);
    return (i);
}
