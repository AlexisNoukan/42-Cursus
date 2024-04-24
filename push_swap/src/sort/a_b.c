/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_b.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:24:07 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/24 23:27:11 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate_ab(t_stack **a, t_stack **b, t_stack *cheapest)
{
	t_stack	*temp_b;

	temp_b = *b;
	while (temp_b != cheapest)
		rotate_rotate(a, b);
	init_a(a, b);
}

void	reverse_ab(t_stack **a, t_stack **b, t_stack *cheapest)
{
	t_stack	*temp_b;

	temp_b = *b;
	while (temp_b != cheapest)
		rr(a, b);
	init_a(a, b);
}

void	a_b(t_stack **a, t_stack **b)
{
	t_stack	*cheapest;

	cheapest = get_cheapest(a);
	if (cheapest->above_median && cheapest->target->above_median)
		rotate_ab(a, b, cheapest);
	else if (!(cheapest->above_median) && !(cheapest->target->above_median))
		reverse_ab(a, b, cheapest);
}
