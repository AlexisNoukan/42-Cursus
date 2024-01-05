/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:20:10 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/05 14:23:02 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*i;
	char	*str;
	int		len;

	len = count * size;
	i = (char *)malloc(len);
	if (!i)
	{
		free(i);
		return (NULL);
	}
	if (i)
	{
		str = i;
		while (len--)
			*str++ = '\0';
	}
	return (i);
}

char	*ft_clean(char *stash)
{
	int		i;
	int		j;
	char	*tmp;

	tmp = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!tmp)
		return (NULL);
	i = 0;
	j = 0;
	while ((stash[i] != '\n' && stash[i] != '\0') && i < (BUFFER_SIZE + 1))
		i++;
	i++;
	while (stash && j < (BUFFER_SIZE + 1))
	{
		tmp[j] = stash[i];
		i++;
		j++;
	}
	tmp[j] = '\0';
	free(stash);
	stash = NULL;
	return (tmp);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	int			bytes_read;

	line = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!line)
		return (NULL);
	bytes_read = read(fd, line, BUFFER_SIZE);
	if (bytes_read <= 0)
	{
		free(line);
		line = NULL;
		return (NULL);
	}
	if (!stash)
		stash = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!stash)
		return (NULL);
	stash = ft_strjoin(stash, line);
	while (!ft_verify(stash))
	{
		if (bytes_read <= 0)
		{
			free(stash);
			free(line);
			stash = NULL;
			line = NULL;
			return (NULL);
		}
		line[bytes_read] = '\0';
		stash = ft_strjoin(stash, line);
		bytes_read = read(fd, line, BUFFER_SIZE);
	}
	ft_line(stash, line);
	stash = ft_clean(stash);
	return (line);
}
