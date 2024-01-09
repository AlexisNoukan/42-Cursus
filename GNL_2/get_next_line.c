/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:42:07 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/09 13:19:32 by anoukan          ###   ########.fr       */
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


char    *get_next_line(int fd)
{
    
}