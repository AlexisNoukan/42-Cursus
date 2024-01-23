/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:45:33 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/23 13:43:45 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

// include
# include "../mlx42/include/MLX42/MLX42.h"
# include <fcntl.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>

// structure

typedef struct s_map
{
	int		fd;
	char	**map;
	int		e;
	int		p;
	int		w;
}			t_map;

// define
# define WIDTH 256
# define HEIGHT 256

// window
int			ft_window(void);

#endif