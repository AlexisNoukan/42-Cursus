/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:20:10 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/11 14:48:59 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *ft_clean(char *stash)
{
    int     i;
    char    *tmp;

    tmp = malloc(ft_strlen(stash) + 1);
    if (!tmp)
        return NULL;
    i = 0;
    while (stash[i] != '\n' && stash[i] != '\0')
        i++;
    if (stash[i] == '\n')
        i++;
    ft_strncpy(tmp, stash + i, ft_strlen(stash + i));
    tmp[ft_strlen(stash + i)] = '\0';
    free(stash);
    stash = NULL;
    return tmp;
}

char    *get_next_line(int fd)
{
    static char *stash;
    char        *line;
    int         bytes_read;
    size_t      len;
    char        *result;

    //Allocation de memmoir et verification fichier vide
    line = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!line)
        return NULL;
    bytes_read = read(fd, line, BUFFER_SIZE);
    if (bytes_read <= 0)
    {
        free(line);
        line = NULL;
        return NULL;
    }
    //allocation de la stash si elle n existe pas ainsi que stockage de la premiere iteration du programme
    if (!stash)
    {
        stash = malloc(sizeof(char));
        if (!stash)
        {
            free(line);
            return NULL;
        }
        *stash = '\0';
        stash = ft_strjoin(stash, line);
    }  
    //verification et stockage dans la stash
    while (!ft_verify(stash))
    {
        bytes_read = read(fd, line, BUFFER_SIZE);
        if (bytes_read <= 0)
            break;
        line[bytes_read] = '\0';
        stash = ft_strjoin(stash, line);
    }
    //trouver la len a ecrire
    len = 0;
    while (stash[len] != '\n' && stash[len] != '\0')
        len++;
    //verification fichier contenant uniquement un \n
    if (stash[0] == '\n' && len == 0)
    {
        free(line);
        free(stash);
        return NULL;
    }
    //allocation du resultat
    result = malloc((len + 1) * sizeof(char));
    if (!result)
    {
        free(line);  
        return NULL;
    }
    //copie de la ligne dans le resultat et cleaning de la stash
    ft_strncpy(result, stash, len);
    result[len] = '\0';
    stash = ft_clean(stash);
    free(line);
    return result;
} 
