/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:37:51 by anoukan           #+#    #+#             */
/*   Updated: 23/10/2023 12:54:00 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char const *str, size_t l)

{
	size_t	i;

	i = 0;
	while (str[i] != '\0' && i <= l)
	{
		dest[i] = str[i];
		++i;
	}
	dest[i] = '\0';
	return (i);
}

/*int	main(void)
{
	char	s[] = "lala";
	char	d[5] = "lolo";
	int		l;

	l = 4;
	printf("%zu\n", strlcpy(d, s, l));
	printf("%zu\n", ft_strlcpy(d, s, l));
	return (0);
}*/
