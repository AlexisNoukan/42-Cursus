/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:45:33 by anoukan           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/01/23 13:17:36 by anoukan          ###   ########.fr       */
=======
/*   Updated: 2024/01/23 13:43:45 by anoukan          ###   ########.fr       */
>>>>>>> db27e2cd52431c9eb95b22daedf1dbb76d561df8
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

<<<<<<< HEAD
//structure

typedef struct s_map
{
    int fd;
    char **map;
    int E;
    int P;
    int W;
} t_map;

// include
# include "../mlx42/include/MLX42/MLX42.h"
# include "../LibFt/GNL/get_next_line.h"
# include "../LibFt/printf/ft_printf.h"
# include "../LibFt/libft/libft.h"
=======
// include
# include "../mlx42/include/MLX42/MLX42.h"
# include <fcntl.h>
>>>>>>> db27e2cd52431c9eb95b22daedf1dbb76d561df8
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