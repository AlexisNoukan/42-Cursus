/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsplit_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:15:29 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/24 23:25:46 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	unsplit_init(char **argv, t_stack **a)
{
	int		i;
	t_stack	*new;
	int		j;

	i = 2;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				j++;
			else
				ft_error();
		}
		i++;
	}
	i = 2;
	while (argv[i])
		{
			new = ft_lstnew2(ft_atoi(argv[i]));
			ft_lstadd_front2(a, new);
			i++;
		}
}
