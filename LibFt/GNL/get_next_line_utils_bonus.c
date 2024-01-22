/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:05:51 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/22 17:54:32 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_verify(char *stash)
{
	size_t	i;
	size_t	v;

	v = 0;
	i = ft_strlen(stash);
	while (stash[v] != '\n' && i != 0)
	{
		i--;
		v++;
	}
	if (stash[i] == '\n' || stash[i] == '\0')
		return (1);
	return (0);
}
