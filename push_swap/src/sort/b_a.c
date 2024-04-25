/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_a.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 23:43:39 by anoukan           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/04/25 20:28:34 by anoukan          ###   ########.fr       */
=======
/*   Updated: 2024/04/25 10:53:41 by anoukan          ###   ########.fr       */
>>>>>>> 39bcdf4ed9860744bd6a58a9067f945727f7a3f4
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	b_a(t_stack **a, t_stack **b)
{
	t_stack	*temp_b;

	temp_b = *b;
<<<<<<< HEAD
	while (temp_b)
	{
		pa(a, b);
		temp_b = temp_b->next;
	}
=======
	while (temp_b != cheapest)
		rotate_rotate(a, b);
	init_a(a, b);
}

void	reverse_ba(t_stack **a, t_stack **b, t_stack *cheapest)
{
	t_stack	*temp_b;

	temp_b = *b;
	while (temp_b != cheapest)
		rr(a, b);
	init_a(a, b);
}

void	b_a(t_stack **a, t_stack **b)
{
	t_stack	*cheapest;

	cheapest = get_cheapest(a);
	if (cheapest->above_median && cheapest->target->above_median)
		rotate_ab(a, b, cheapest);
	else if (!(cheapest->above_median) && !(cheapest->target->above_median))
		reverse_ab(a, b, cheapest);
>>>>>>> 39bcdf4ed9860744bd6a58a9067f945727f7a3f4
}
