/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:20:10 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/11 09:54:45 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_clean(char *stash)
{
    int i;
    char *tmp;

    tmp = malloc(ft_strlen(stash) + 1);
    if (!tmp) {
        return NULL;
    }
    i = 0;
    while (stash[i] != '\n' && stash[i] != '\0') {
        i++;
    }
    if (stash[i] == '\n') {
        i++;
    }
    ft_strncpy(tmp, stash + i, ft_strlen(stash + i));
    tmp[ft_strlen(stash + i)] = '\0';
    free(stash);
    stash = NULL;
    printf("this is the tmp: %s\n", tmp);
    return tmp;
}

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
    size_t len = 0;
    while (stash[len] != '\n' && stash[len] != '\0') {
        len++;
    }
    char *result = malloc((len + 1) * sizeof(char));
    if (!result) {
        free(line);
        return NULL;
    }
    ft_strncpy(result, stash, len);
    result[len] = '\0';
    char *temp = ft_clean(stash);
    stash = temp;
    free(line);
    return result;
}

