/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*  ft_strmapi.c                                          :+:     :+:    :+:  */
/*                                                      +:+ +:+        +:+    */
/*  By: anoukan <anoukan@student.42mulhouse.fr>       +#+  +:+      +#+       */
/*                                                  +#+#+#+#+#+  +#+          */
/*  Created: 29/10/2023 13:28:38 by anoukan              #+#   #+#            */
/*  Updated: 29/10/2023 13:28:38 by anoukan             ###  ##########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char  *dest;

    dest = malloc(ft_strlen(s) + 1);
    if(!dest)
        return (NULL);
    i = 0;
    while(s[i])
    {
        dest[i] = (*f)(i, s[i]);
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
