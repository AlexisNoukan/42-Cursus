/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:59:11 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/24 15:26:32 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_init(char **argv, t_stack **a)
{
	int	i;

	i = 0;
	while (argv[i])
		i++;
	if (i < 2)
		unsplit_init(argv, a);
	else if (i == 2)
		split_init(argv, a);
	else
		ft_error();
}
