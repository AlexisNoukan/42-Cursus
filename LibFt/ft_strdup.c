/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*  ft_strdup.c                                           :+:     :+:    :+:  */
/*                                                      +:+ +:+        +:+    */
/*  By: anoukan <anoukan@student.42mulhouse.fr>       +#+  +:+      +#+       */
/*                                                  +#+#+#+#+#+  +#+          */
/*  Created: 23/10/2023 10:54:29 by anoukan              #+#   #+#            */
/*  Updated: 23/10/2023 10:54:34 by anoukan             ###  ##########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	return (l);
}

char	*ft_strdup(char *src)
{
	int		length;
	char	*dest;
	int		i;

	i = 0;
	length = ft_strlen(src);
	dest = (char *)malloc((length + 1) * sizeof(char));
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[length] = '\0';
	return (dest);
}
/*
int	main(void)
{
	printf("%s\n", ft_strdup("Hello World!"));
	printf("%s", strdup("Hello World!"));
}*/

