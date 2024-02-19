/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:51:58 by anoukan           #+#    #+#             */
/*   Updated: 2024/02/19 14:28:50 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	ft_parsing(t_map map, char **argv)
{
	int		fd;
	char	*file;

	file = argv[1];
	fd = open(file, O_RDONLY);
	map.fd = fd;
	ft_map_chequer(map);
	ft_verify_element(map);
	ft_not_square(map);
}

int	ft_valid(t_map map)
{
	map.w = ft_verify_wall(map);
	if (map.e == 1 && map.p == 1 && map.w == 1 && map.c <= 1
		&& map.notsquare == 1 && map.s <= 1)
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
	map.y = i;
	return (ft_valid(map));
}
