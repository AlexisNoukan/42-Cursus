/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:51:58 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/29 15:11:30 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	ft_verify_wall(t_map map)
{
	size_t	i;

	i = 0;
	while(map->*map[i])
}

int	ft_valid(t_map map)
{
	if (map.e >= 1 && map.p == 1 && map.w == 1)
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
