/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:06:01 by anoukan           #+#    #+#             */
/*   Updated: 31/10/2023 14:02:35 by anoukan          ###   ########.fr       */
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
    if (cstr[0] == '\0' && cto_find[0] == '\0' && len == 0)
        return (cstr);
    if (cto_find[0] == '\0')
		return (cstr);
	while (cstr[i] != '\0' && i < len)
	{
		n = i;
		j = 0;

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

