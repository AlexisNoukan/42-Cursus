/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0005/10/20 11:13:12 by noukan            #+#    #+#             */
/*   Updated: 2023/10/26 17:55:46 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	dest = (char *)malloc(end - start + 1);
	if (dest == NULL)
		return (NULL);
	ft_strncpy(dest, (char *)s1 + start, end - start);
	dest[end - start] = '\0';
	return (dest);
}

/*
int	main(void) {
	const char *input = "  \tHello, World!  \n";
	const char *set = " \t\n";

	char *trimmed = ft_strtrim(input, set);

	if (trimmed != NULL) {
		printf("Trimmed string: \"%s\"\n", trimmed);
		free(trimmed); // Don't forget to free the allocated memory
	} else {
		printf("Memory allocation failed.\n");
	}

	return (0);
}*/
