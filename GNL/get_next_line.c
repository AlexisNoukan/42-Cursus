/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:20:10 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/08 14:04:05 by anoukan          ###   ########.fr       */
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
	char	*tmp;

	tmp = ft_calloc(ft_strlen(stash) + 1, sizeof(char));
	if (!tmp)
		return (NULL);
	i = 0;
	while ((stash[i] != '\n' || stash[i] != '\0') && i < BUFFER_SIZE)
		i++;
	i++;
	ft_strcpy(tmp, stash +i);
	free(stash);
	stash = NULL;
	printf("this is the tmp : %s\n", tmp);
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
	{
		stash = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
		if (!stash)
			return (NULL);
	}
	stash = ft_strjoin(stash, line);
	while (!ft_verify(stash, bytes_read))
	{
		line[bytes_read] = '\0';
		stash = ft_strjoin(stash, line);
		bytes_read = read(fd, line, BUFFER_SIZE);
		if (bytes_read <= 0)
			break;
	}
	ft_line(stash, line);
	stash = ft_clean(stash);
	printf("this is the stash : %s\n", stash);
	printf("this is the line : %s", line);
	return (line);
}
