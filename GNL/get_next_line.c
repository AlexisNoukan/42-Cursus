/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:20:10 by anoukan           #+#    #+#             */
/*   Updated: 2023/12/24 10:17:13 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	int			bytes_read;

	if (!stash)
		stash = NULL;
	if (!stash)
		stash = (char *)malloc(BUFFER_SIZE + 1);
	line = (char *)malloc(BUFFER_SIZE + 1);
	if (!line)
		return (NULL);
	bytes_read = 1;
	while (!ft_verify(stash) && bytes_read != 0)
	{
		bytes_read = read(fd, line, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(line);
			return (NULL);
		}
		line[bytes_read] = '\0';
		stash = ft_strjoin(stash, line);
	}
	ft_line(stash, line);
	stash = ft_clean(stash);
	return (line);
}
