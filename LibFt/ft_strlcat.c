/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:38:08 by anoukan           #+#    #+#             */
/*   Updated: 2023/10/26 17:56:09 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

    if (!dst && src && dstsize == 0)
        return (ft_strlen(src));
    i = ft_strlen(dst);
	j = 0;
	if (i >= dstsize)
		return (ft_strlen(src) + dstsize);
	while (src[j] && j < (dstsize - i - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*
int	main(void)
{
	// Write C code here
	char str[] = "the cake is a lie !\0I'm hidden lol\r\n";
	char *buff2 = NULL;
	size_t max = 0;

	printf("%lu\n", ft_strlcat(buff2, str, max));
	printf("%s\n",buff2);
	printf("%lu\n", strlcat(buff2, str, max));
	printf("%s\n",buff2);
	return (0);
}*/
