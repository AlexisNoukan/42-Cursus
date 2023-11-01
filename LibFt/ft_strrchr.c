/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0003/10/20 14:05:17 by noukan            #+#    #+#             */
/*   Updated: 2023/11/01 06:48:29 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;
	int			i;

	str = s;
	i = ft_strlen(str);
	if (c == '\0')
		return ((char *)(str + i));
	while (i >= 0 && str)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}
