/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:49:51 by anoukan           #+#    #+#             */
/*   Updated: 2024/02/08 10:56:15 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int ft_verify_element(t_map map)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    while(map[i][j])
    {
            while(map[i][j])
    {
          if (map[i][j] == e)
            map.e = 1;
        if (map[i][j] == p)
            map.e = 1;
            j++;
    }
      i++;
    }
    return (0);
}