/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:05:51 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/09 09:46:54 by anoukan          ###   ########.fr       */
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

int	ft_verify(char *stash, int bytes_read)
{
	size_t	i;

	i = 0;
	while (i < (BUFFER_SIZE + 1) && (stash[i] != '\0' || stash[i] != '\n'))
		i++;
	if ((stash[i] == '\n' || stash[i] == '\0') || (bytes_read == 0 && i == BUFFER_SIZE))
		return (1);
	return (0);
}

void	ft_line(char *stash, char *line)
{
	size_t	i;

	i = 0;
	while (stash[i] != '\n' && stash[i] != '\0' && i < (BUFFER_SIZE + 1))
	{
		line[i] = stash[i];
		i++;
	}
	line[i] = '\n';
}
