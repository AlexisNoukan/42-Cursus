/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nex_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:20:10 by anoukan           #+#    #+#             */
/*   Updated: 2023/12/14 10:45:35 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_nex_line.h"

void	ft_free(char *buffer)
{
	free(buffer);
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	char		*buffer;

	stash = NULL;
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	if (!stash)
		stash = (char *)malloc(BUFFER_SIZE + 1);
	if (!stash)
		ft_free(buffer);
	ft_strcpy(stash, buffer);
	while (ft_verify(stash) != 1)
	{
		if (read(fd, buffer, BUFFER_SIZE) == -1)
			return (NULL);
		ft_strcpy(stash, ft_strjoin(stash, buffer));
	}
	if (ft_verify(stash) == 1)
	{
		line = (char *)malloc(BUFFER_SIZE + 1);
		if (!line)
			ft_free(buffer);
		ft_line(stash, line);
		stash = ft_clean(stash);
		free(buffer);
		return (line);
	}
	free(buffer);
	return (NULL);
}
