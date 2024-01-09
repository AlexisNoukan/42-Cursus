/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:42:02 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/09 13:17:46 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int    ft_strlen(char *str)
{
    size_t  i;

    i = 0;
    while(*str)
        i++;
    return (i);
}

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

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*d;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	d = malloc(i + j + 1);
	if (!d)
		return (NULL);
	ft_strcpy(d, (char *)s1);
	ft_strcpy(d + i, (char *)s2);
	free(s1);
	return (d);
}

int ft_verify(char *stash)
{
    size_t  i;

    if (!stash)
        return (0);
    while (stash[i])
    {
        if (stash[i] == '\n')
            return (1);
        i++;
    }
    return (0);
}

void ft_free(char *stash)
{
    if (stash)
    {
        free(stash);
        stash = NULL;
    }
}
