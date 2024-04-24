/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cost_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:21:34 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/24 23:19:26 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	push_cost_init(t_stack **a, t_stack **b)
{
	t_stack	*temp_a;
	int		i;

	temp_a = *a;
	while (temp_a)
	{
		if (temp_a->above_median == 1)
		{
			i = temp_a->index;
			if (temp_a->target->above_median == 1)
				i += temp_a->target->index;
			else
				i += ft_lstsize2(*b) - temp_a->target->index;
		}
		else
		{
			i = ft_lstsize2(*a) - temp_a->index;
			if (temp_a->target->above_median == 1)
				i += temp_a->target->index;
			else
				i += ft_lstsize2(*b) - temp_a->target->index;
		}
	}
}
