/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:51:58 by anoukan           #+#    #+#             */
/*   Updated: 2024/02/08 13:45:01 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	ft_valid(t_map map)
{
	map.w = ft_verify_wall(map);
	map.r = ft_not_square(map);
	if (map.e >= 1 && map.p == 1 && map.w == 1 && map.r == 1)
		return (1);
	return (0);
}

int	ft_map_chequer(t_map map)
{
	size_t	i;

	i = 0;
	while (get_next_line(map.fd) != 0)
	{
		map.map[i] = get_next_line(map.fd);
		i++;
	}
	return (ft_valid(map));
}
