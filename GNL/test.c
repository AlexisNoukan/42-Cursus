/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:40:35 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/17 14:40:36 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	*a;
	int		i;
	char	*d;

	a = "a";
	i = 2;
	d = malloc(i * sizeof(char));
	printf("%s", ft_strncpy(d, a, i));
	return (0);
}
