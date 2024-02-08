/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:49:48 by anoukan           #+#    #+#             */
/*   Updated: 2024/02/08 13:44:57 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	ft_not_square(t_map map)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (map.map[i][j])
	{
		while (map.map[i][j])
			j++;
		i++;
	}
	if (i > j)
		return (1);
	else if (j > i)
		return (1);
	return (0);
}

int	ft_verify_wall(t_map map)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (map.map[0][j] == 1)
		j++;
	while (map.map[i][0] == 1)
		i++;
	i = 0;
	while (map.map[i][j] == 1)
		i++;
	while (map.map[i][j] == 1)
		j--;
	return (0);
}
