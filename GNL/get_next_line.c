/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:20:10 by anoukan           #+#    #+#             */
/*   Updated: 2023/12/15 14:28:49 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	char		buffer[BUFFER_SIZE + 1];
	int			bytes_read;

	if (!stash)
		stash = NULL;
	if (!stash)
		stash = (char *)malloc(1);
	if (fd < 0 || BUFFER_SIZE <= 0 || !stash)
		return (NULL);
	line = (char *)malloc(BUFFER_SIZE + 1);
	if (!line)
		return (NULL);
	while (!ft_verify(stash))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
		{
			free(line);
			if (bytes_read == 0 && ft_strlen(stash) == 0)
			{
				free(stash);
				stash = NULL;
			}
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		stash = ft_strjoin(stash, buffer);
	}
	ft_line(stash, line);
	stash = ft_clean(stash);
	return (line);
}
