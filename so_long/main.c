/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:52:13 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/23 13:13:57 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/so_long.h"

int32_t	main(int argc, char **argv)
{
	int		fd;
	t_map	map;
	char	*file;

	file = argv[1];
	fd = open(file, O_RDONLY);
	map.fd = fd;
	ft_printf("%s", get_next_line(fd));
	ft_window();
	return (0);
}
