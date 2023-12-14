/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:20:46 by anoukan           #+#    #+#             */
/*   Updated: 2023/12/14 13:50:33 by anoukan          ###   ########.fr       */
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
	d = (char *)malloc(i + j + 1);
	if (d == NULL)
		return (NULL);
	ft_strcpy(d, (char *)s1);
	ft_strcpy(d + i, (char *)s2);
	return (d);
}

int	ft_verify(char *stash)
{
	size_t	i;

	i = 0;
	while (stash[i])
	{
		if (stash[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int	ft_line(char *stash, char *line)
{
	size_t	i;

	i = 0;
	while (stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	line[i] = '\n';
	return (i);
}

char	*ft_clean(char *stash)
{
	int		i;
	int		j;
	char	*tmp;

	tmp = (char *)malloc(BUFFER_SIZE + 1);
	if (!tmp)
		return (NULL);
	i = 0;
	j = 0;
	while (stash[i] != '\n')
		i++;
	i++;
	while (stash[i])
	{
		tmp[j] = stash[i];
		i++;
		j++;
	}
	tmp[i] = '\0';
	free(stash);
	return (tmp);
}
