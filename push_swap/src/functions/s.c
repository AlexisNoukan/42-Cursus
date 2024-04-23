/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:22:58 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/23 14:36:25 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	swap(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	if (ft_lstsize2(*stack_a) < 2)
		return (-1);
	temp = *stack_a;
	ft_lstadd_front2(stack_b, temp);
	*stack_a = temp->next;
	return (0);
}

int	sa(t_stack **a, t_stack **b)
{
	swap(a, b);
	ft_printf("sa\n", 1);
	return (0);
}

int	sb(t_stack **a, t_stack **b)
{
	swap(b, a);
	ft_printf("sb\n", 1);
	return (0);
}
