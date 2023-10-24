/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:07:29 by anoukan           #+#    #+#             */
/*   Updated: 2023/10/23 17:11:19 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
    unsigned char   *cs1;
    unsigned char   *cs2;

	i = 0;
    cs1 = (unsigned char *)s1;
    cs2 = (unsigned char *)s2;
	while ((i < n) && (cs1[i] || cs2[i]))
	{
		if (cs1[i] != cs2[i])
			return (cs1[i] - cs2[i]);
		++i;
	}
	return (0);
}
/*int	main(void)
{
	int	n = 50;
	char s1[] = "Hello";
	char s2[] = "Hqllo";

	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d", strncmp(s1, s2, n));
}*/
