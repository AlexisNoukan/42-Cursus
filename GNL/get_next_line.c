/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:20:10 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/09 09:51:20 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_clean(char *stash)
{
	int		i;
	char	*tmp;

	tmp = malloc(ft_strlen(stash) + 1);
	if (!tmp)
		return (NULL);
	i = 0;
	while ((stash[i] != '\n' || stash[i] != '\0') && i < BUFFER_SIZE)
		i++;
	i++;
	ft_strcpy(tmp, stash + i);
	free(stash);
	stash = NULL;
	return (tmp);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	int			bytes_read;

	line = malloc(BUFFER_SIZE + 1);
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
	{
		stash = malloc(BUFFER_SIZE + 1);
		if (!stash)
			return (NULL);
	}
	stash = ft_strjoin(stash, line);
	while (!ft_verify(stash, bytes_read))
	{
		line[bytes_read] = '\0';
		bytes_read = read(fd, line, BUFFER_SIZE);
		stash = ft_strjoin(stash, line);
		if (bytes_read < 0)
			return (NULL);
	}
	printf("this is the stash	: %s\n", stash);
	ft_line(stash, line);
	stash = ft_clean(stash);
	return (line);
}
