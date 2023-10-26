/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:37:51 by anoukan           #+#    #+#             */
/*   Updated: 2023/10/26 17:59:27 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *str, size_t l)

{
	size_t	i;

	i = 0;
	if (!dest || !str || l == 0)
		return (ft_strlen(str));
	while (str[i] && i < (l - 1))
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(str));
}
/*
int	main(void)
{
	char	s[] = "hello !";
	char	d[5] = "";
	char	d2[5] = "";
	int		l;

	l = 2;
	printf("%zu\n", ft_strlcpy(d, s, l));
	printf("%s\n", d);
	printf("%zu\n", strlcpy(s, d2, l));
	printf("%s\n", d2);

	return (0);
}*/
