/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nex_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:20:10 by anoukan           #+#    #+#             */
/*   Updated: 2023/12/13 16:53:43 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_nex_line.h"

char *get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	char		*buffer;

	stash = (char *)malloc(BUFFER_SIZE + 1);
	if (!stash)
		return (NULL);
	if (read(fd, buffer, BUFFER_SIZE)== -1)
		return (NULL);
	ft_strcpy(stash, ft_strjoin(stash, buffer));
	if(ft_verify(stash) == 1)
	{
		ft_line(stash, line);
		ft_clean(stash);
	}
	else
		get_next_line(fd);
	return (line);
}
