/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:05:51 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/18 12:56:15 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*d;
	size_t	f;
	size_t	g;

	d = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	f = 0;
	g = 0;
	if (!d)
		return (free(s1), NULL);
	while (s1[f])
	{
		d[f] = s1[f];
		++f;
	}
	while (s2[g])
	{
		d[f] = s2[g];
		++f;
		++g;
	}
	d[f] = '\0';
	free(s1);
	return (d);
}

int	ft_verify(char *stash)
{
	size_t	i;

	i = 0;
	while (stash[i] != '\n' && !stash)
		i++;
	if (stash[i] == '\n' || stash[i] == '\0')
		return (1);
	return (0);
}
