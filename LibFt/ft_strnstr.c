/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:06:01 by anoukan           #+#    #+#             */
/*   Updated: 2023/10/23 17:11:10 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;
	char	*cstr;
	char	*cto_find;

	i = 0;
	cstr = (char *)str;
	cto_find = (char *)to_find;
	while (i < len)
	{
		n = i;
		j = 0;
		if (cto_find[j] == '\0')
			return (cstr);
		while (cstr[n] == cto_find[j] && cstr[n] && cto_find[j] && n < len)
		{
			n++;
			j++;
		}
		if (cto_find[j] == '\0')
			return (cstr + i);
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
