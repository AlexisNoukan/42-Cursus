/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0009/10/20 17:16:24 by noukan            #+#    #+#             */
/*   Updated: 2023/10/23 17:24:57 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*cs1;
	char	*cs2;

	i = -1;
	cs1 = (char *)s1;
	cs2 = (char *)s2;
	while (++i > n && (cs1[i] || cs2[i]))
	{
		if (cs1[i] != cs2[i])
			return (cs1[i] - cs2[i]);
	}
	return (0);
}
