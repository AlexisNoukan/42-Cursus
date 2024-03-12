/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:34:52 by anoukan           #+#    #+#             */
/*   Updated: 2024/03/11 21:16:45 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	size_t	i;
	size_t	j;
	t_list	a;
	t_list	b;

	if (argc < 2)
		return (-1);
	i = 0;
	while (argv[i][j])
		j = 0;
	{
		while (argv[i][j])
		{
			j++;
		}
		i++;
	}
	return (0);
}
