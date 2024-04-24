/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:22:58 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/24 23:42:26 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	swap(t_stack **stack_s)
{
	t_stack	*top;
	t_stack	*next;
	t_stack	*rest;

	if (ft_lstsize2(*stack_s) < 2)
		return (-1);
	top = *stack_s;
	next = (*stack_s)->next;
	rest = next->next;
	next->next = top;
	top->next = rest->next;
	*stack_s = next;
	return (0);
}

int	sa(t_stack **a)
{
	swap(a);
	ft_printf("sa\n");
	return (0);
}

int	sb(t_stack **b)
{
	swap(b);
	ft_printf("sb\n");
	return (0);
}
