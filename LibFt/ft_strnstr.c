/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:06:01 by anoukan           #+#    #+#             */
/*   Updated: 2023/10/23 12:44:28 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = 0;
	while (i < len)
	{
		n = i;
		j = 0;
		if (to_find[j] == '\0')
			return (str);
		while (str[n] == to_find[j] && str[n] && to_find[j] && n < len)
		{
			n++;
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		++i;
	}
	return (NULL);
}
/*int	main(void)
{
	char	s1[] = "lolHelloWorldloo";
	char	s2[] = "HelloWorld";
	size_t len = 8;
	printf("ft_strnstr : %s\n", ft_strnstr(s1, s2, len));
	printf("strnstr : %s", strnstr(s1, s2, len));
}*/
