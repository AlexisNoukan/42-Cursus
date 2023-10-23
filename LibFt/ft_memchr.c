/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:44:35 by anoukan           #+#    #+#             */
/*   Updated: 2023/10/23 17:17:36 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = -1;
	while (++i < n)
	{
		if (str[i] == c)
			return (&str[i] + ft_strlen(str));
	}
	return (0);
}
