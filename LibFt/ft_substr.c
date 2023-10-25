/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*  ft_substr.c                                           :+:     :+:    :+:  */
/*                                                      +:+ +:+        +:+    */
/*  By: anoukan <anoukan@student.42mulhouse.fr>       +#+  +:+      +#+       */
/*                                                  +#+#+#+#+#+  +#+          */
/*  Created: 25/10/2023 09:16:28 by anoukan              #+#   #+#            */
/*  Updated: 25/10/2023 09:16:28 by anoukan             ###  ##########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int    i;
    char            *d;
    char            *void_str;

    if (start >= ft_strlen(s))
    {
        void_str = (char *)malloc(1);
        if (void_str == NULL)
            return (NULL);
        void_str[0] = '\0';
        return (void_str);
    }
    
    i = 0;
    d = (char *)malloc(len + 1);

    if (d == NULL)
        return (NULL);

    if (d == NULL)
        return (NULL);
    while (i < len)
    {
        d[i] = s[start + i];
        i++;
    }
    d[i] = '\0';
    return (d);
}
