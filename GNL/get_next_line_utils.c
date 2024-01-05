/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:05:51 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/05 10:34:33 by anoukan          ###   ########.fr       */
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
	d = ft_calloc(i + j + 1, sizeof(char));
	if (!d)
		return (NULL);
	ft_strcpy(d, (char *)s1);
	ft_strcpy(d + i, (char *)s2);
	return (d);
}

int	ft_verify(char *stash)
{
	size_t	i;

	i = 0;
	while (i < BUFFER_SIZE + 1 && stash[i] != '\0' && stash[i] != '\n')
		i++;
	if (i < BUFFER_SIZE + 1 && (stash[i] == '\n' || stash[i] == '\0'))
			return (1);
	return (0);
}

void	ft_line(char *stash, char *line)
{
	size_t	i;

	i = 0;
	while (stash[i] != '\n' && stash[i] != '\0' && i < BUFFER_SIZE + 1 )
	{
		line[i] = stash[i];
		i++;
	}
	line[i] = '\n';
}

/*
char *get_next_line(int fd) {
    static char *stash;
    char *line;
    int bytes_read;
    int index = 0;

    if (!stash)
        stash = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
    if (!stash)
        return (NULL);

    line = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
    if (!line)
        return (NULL);

    bytes_read = 1;
    while (bytes_read > 0) {
        bytes_read = read(fd, &line[index], 1);
        if (bytes_read == -1) {
            free(line);
            return (NULL);
        }

        if (line[index] == '\n' || line[index] == '\0') {
            line[index + 1] = '\0'; // Terminate the line properly
            break;
        }
        
        index++;

        if (index >= BUFFER_SIZE) {
            // Handle cases where the line exceeds buffer size
            char *tmp = line;
            line = ft_strjoin(line, "\0");
            free(tmp);
        }
    }

    if (index == 0 && bytes_read == 0 && stash[0] == '\0') {
        free(line);
        return (NULL);
    }

    return (line);
}*/
