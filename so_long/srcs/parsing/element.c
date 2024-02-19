/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:49:51 by anoukan           #+#    #+#             */
/*   Updated: 2024/02/15 10:42:08 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	ft_verify_element(t_map map)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (map.map[i][j])
	{
		while (map.map[i][j])
		{
			if (map.map[i][j] == 'e')
				map.e += 1;
			if (map.map[i][j] == 'p')
				map.e += 1;
			if (map.map[i][j] == 'c')
				map.c += 1;
			if (map.map[i][j] == '0')
				map.s += 1;
			j++;
		}
		i++;
	}
}
