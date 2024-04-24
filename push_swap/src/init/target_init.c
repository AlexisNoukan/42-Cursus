/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:25:06 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/24 23:30:08 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	target_init(t_stack **a, t_stack **b)
{
	t_stack	*temp_a;
	t_stack	*temp_b;
	long	match;

	temp_a = *a;
	while (temp_a)
	{
		temp_b = *b;
		match = LONG_MIN;
		while (temp_b)
		{
			if (temp_a->number < temp_b->number && temp_b->number > match)
			{
				match = temp_b->number;
				temp_a->target = temp_b;
			}
			temp_b = temp_b->next;
		}
		if (match == LONG_MIN)
			temp_a->target = is_max(b);
		else
			temp_a->target = temp_a;
		temp_a = temp_a->next;
	}
}
