/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:52:13 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/23 12:21:37 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/so_long.h"

int32_t	main(int argc, char **argv)
{
	int		fd;
	t_map	map;
	char	*file;

	file = argv[1];
	fd = open(file, O_READONLY);
	map.fd = fd;
	ft_window();
	return (0);
}
