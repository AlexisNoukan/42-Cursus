/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:23:52 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/24 23:28:47 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	order(t_stack **s)
{
	t_stack	*temp;
	t_stack	*min;

	temp = *s;
	min = ft_lstnew2(INT_MAX);
	while (temp)
	{
		if (temp->number < min->number)
			min = temp;
		temp = temp->next;
	}
	temp = *s;
	if (min->above_median)
	{
		while (temp != min)
			ra(s);
	}
	else
	{
		while (temp != min)
			rra(s);
	}
}

void	ft_sort(t_stack **a, t_stack **b)
{
	t_stack	*temp_b;

	temp_b = *b;
	if (ft_lstsize2(*a) <= 3)
		three_sort(a);
	if (ft_lstsize2(*a) > 3)
	{
		pb(a, b);
		pb(a, b);
		while (ft_lstsize2(*a) >= 3 && !is_sorted(a))
		{
			init_a(a, b);
			a_b(a, b);
		}
		three_sort(a);
		while (temp_b)
		{
			init_b(a, b);
			b_a(a, b);
		}
	}
	order(a);
}
