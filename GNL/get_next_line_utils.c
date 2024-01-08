/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:05:51 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/08 13:53:20 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*d;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	d = ft_calloc(i + j + 1, sizeof(char));
	if (!d)
		return (NULL);
	ft_strcpy(d, (char *)s1);
	ft_strcpy(d + i, (char *)s2);
	return (d);
}

int	ft_verify(char *stash, int bytes_read)
{
	size_t	i;

	i = 0;
	while (i < BUFFER_SIZE + 1 && (stash[i] != '\0' || stash[i] != '\n'))
		i++;
	if (i < BUFFER_SIZE + 1 && (stash[i] == '\n' || stash[i] == '\0'))
		return (1);
	else if (bytes_read == 0 && i == BUFFER_SIZE)
		return (1);
	return (0);
}

void	ft_line(char *stash, char *line)
{
	size_t	i;

	i = 0;
	while (stash[i] != '\n' && stash[i] != '\0' && i < BUFFER_SIZE + 1)
	{
		line[i] = stash[i];
		i++;
	}
	line[i] = '\n';
}
