/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*  ft_strjoin.c                                          :+:     :+:    :+:  */
/*                                                      +:+ +:+        +:+    */
/*  By: anoukan <anoukan@student.42mulhouse.fr>       +#+  +:+      +#+       */
/*                                                  +#+#+#+#+#+  +#+          */
/*  Created: 25/10/2023 10:07:55 by anoukan              #+#   #+#            */
/*  Updated: 25/10/2023 10:07:55 by anoukan             ###  ##########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t  i;
    size_t  j;
    char    *d;

    i = ft_strlen(s1);
    j = ft_strlen(s2);
    d = (char *)malloc(i + j + 1);
    if (d == NULL)
        return (NULL);
    ft_strcpy(d, (char *)s1);
    ft_strcpy(d + i, (char *)s2);
    return (d);
    
}
/*
int main()
{
    const char *s1 = "Hello";
    const char *s2 = "World";

    char *joined = ft_strjoin(s1, s2);

    if (joined != NULL) {
        printf("%s", joined);
        free(joined); // Don't forget to free the allocated memory
    }

    return 0;
}*/

