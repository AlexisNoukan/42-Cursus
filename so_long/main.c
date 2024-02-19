/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:52:13 by anoukan           #+#    #+#             */
/*   Updated: 2024/02/15 14:04:22 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/so_long.h"

int32_t	main(int argc, char **argv)
{
	t_map	map;

	if (argc < 2)
		return (ft_printf("no map found"), 0);
	ft_parsing(map, argv);
	ft_window();
	return (0);
}
