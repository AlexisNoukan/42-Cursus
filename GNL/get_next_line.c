/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:20:10 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/11 09:26:27 by anoukan          ###   ########.fr       */
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
	while (stash[i] != '\n' && stash)
		i++;
	i++;
	ft_strcpy(tmp, stash + i);
	free(stash);
	stash = NULL;
	printf("this is the tmp		: %s\n", tmp);
	return (tmp);
}
/*
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
	while (!ft_verify(stash))
	{
		bytes_read = read(fd, line, BUFFER_SIZE);
		stash = ft_strjoin(stash, line);
		if (bytes_read < 0)
			return (NULL);
	}
	ft_line(stash, line);
	stash = ft_clean(stash);
	printf("this is the stash	: %s\n", stash);
	return (line);
}
*/

char *get_next_line(int fd) {
    static char *stash;
    char *line;
    int bytes_read;

    line = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!line) {
        return NULL;
    }

    bytes_read = read(fd, line, BUFFER_SIZE);
    if (bytes_read <= 0) {
        free(line);
        line = NULL;
        return NULL;
    }

    if (!stash) {
        stash = malloc(sizeof(char)); // Initialize stash if NULL
        if (!stash) {
            free(line);
            return NULL;
        }
        *stash = '\0';
    }

    stash = ft_strjoin(stash, line);
    while (!ft_verify(stash)) {
        bytes_read = read(fd, line, BUFFER_SIZE);
        if (bytes_read <= 0) {
            break;
        }
        line[bytes_read] = '\0';
        stash = ft_strjoin(stash, line);
    }

    // Extract the line correctly from stash, ensuring the right length
    size_t len = 0;
    while (stash[len] != '\n' && stash[len] != '\0') {
        len++;
    }

    char *result = malloc((len + 1) * sizeof(char));
    if (!result) {
        free(line);
        return NULL;
    }

    strncpy(result, stash, len);
    result[len] = '\0';

    // Clean up stash and update it for the remaining data
    char *temp = ft_clean(stash);
    free(stash);
    stash = temp;

    free(line);
    return result;
}

