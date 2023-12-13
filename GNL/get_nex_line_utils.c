/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nex_line_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:20:46 by anoukan           #+#    #+#             */
/*   Updated: 2023/12/13 15:39:40 by anoukan          ###   ########.fr       */
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

	d = (char *)malloc(ft_strlent(s1) + ft_strlent(s2) + 1);
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
	return (d);
}

int	ft_verify(char *stash)
{
	while (*stash++)
	{
		if(*stash == '\n')
			return (1);
	}
	return (0);
}

int	ft_line(char *stash, char *line)
{
	size_t	i;

	i = 0;
	while (stash[i] != '\n')
	{
		line[i] = stash[i];
	}
	line[i] = '\n';
	return (i);
}

char	*ft_clean(char *stash)
{
	int		i;
	int		j;
	char 	*tmp;

	i = 0;
	j = 0;
	while (stash[i] != '\n')
		i++;
	while(stash[i])
	{
		tmp[j] = stash[i];
		i++;
		j++;
	}
	return (stash);
}
