/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nex_line_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:20:46 by anoukan           #+#    #+#             */
/*   Updated: 2023/12/11 14:17:34 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_nex_line.h"

int	ft_strlent(char const *s)
{
	int	i;

	i = 0;
	while(*s)
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	int		i;
	int		j;

	*d = (char *)malloc(ft_strlent(s1) + ft_strlent(s2) + 1);
	i = 0;
	j = 0;
	while (*s1)
	{
		d[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		d[i] = s2[j];
		i++;
		j++;
	}
	return (*d);
}
