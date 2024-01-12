/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:20:10 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/12 15:39:29 by anoukan          ###   ########.fr       */
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
	while (stash[i] != '\n' && stash[i] != '\0')
		i++;
	if (stash[i] == '\n')
		i++;
	ft_strncpy(tmp, stash + i, ft_strlen(stash + i));
	tmp[ft_strlen(stash + i)] = '\0';
	free(stash);
	stash = NULL;
	return (tmp);
}

char	*get_next_line_2(char *stash, char *buffer, int bytes_read)
{
	char	*result;

	while (!ft_verify(stash))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
			break ;
		buffer[bytes_read] = '\0';
		stash = ft_strjoin(stash, buffer);
	}
	// trouver la len a ecrire + creer une fonction avec tous ca
	len = 0;
	while (stash[len] != '\n' && stash[len] != '\0')
		len++;
	// allocation du resultat
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (free(stash), free(buffer), NULL);
	// copie de la ligne dans le resultat et cleaning de la stash
	ft_strncpy(result, stash, len);
	result[len] = '\0';
	stash = ft_clean(stash);
	free(buffer);
	return (result);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*buffer;
	int			bytes_read;
	size_t		len;

	/*Allocation de memmoir et verification fichier vide*/
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	buffer[bytes_read] = '\0';
	if (bytes_read < 0)
		return (free(buffer), buffer = NULL, NULL);
	// allocation de la stash si elle n existe pas ainsi que stockage de la premiere iteration du programme
	if (!stash)
	{
		stash = malloc(sizeof(char));
		if (!stash)
			return (free(buffer), NULL);
		*stash = '\0';
	}
	stash = ft_strjoin(stash, buffer);
	// securite fichier vide
	if (stash[0] == '\0')
		return (free(stash), stash = NULL, free(buffer), buffer = NULL, NULL);
	// verification et stockage dans la stash
	+ajouter ca a une fonction de verification return (get_next_line_2(stash,
			buffer, bytes_read));
}
