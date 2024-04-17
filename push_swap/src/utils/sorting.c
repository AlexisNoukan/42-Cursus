/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:08:19 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/17 14:03:32 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

bool	stack_sorted(t_stack **stack)
{
	t_stack	*temp;

	ft_printf("sorting\n");
	if (!stack)
		return (-1);
	temp = *stack;
	while (temp->next)
	{
		if (temp->number > temp->next->number)
			return (ft_printf("false\n"), false);
		temp = temp->next;
	}
	return (ft_printf("true\n"), true);
}

void	counting_sort(t_stack **stack_a, t_stack **stack_b)
{
	while ((*stack_b)->next != NULL || *stack_b != NULL)
	{
		while ((*stack_a)->next != NULL || *stack_a != NULL)
		{
			if ((*stack_a)->number - (*stack_b)->number > 0)
				*stack_a = (*stack_a)->next;
			else
			{
				pa(stack_a, stack_b);
				break ;
			}
		}
		*stack_b = (*stack_b)->next;
	}
}

void	ft_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	meanvalue;

	if (*stack_a == NULL)
		return ;
	meanvalue = mean_value(stack_a);
	ft_printf("%d\n", mean_value);
	while ((*stack_a)->next != NULL && ft_lstsize2(*stack_a) >= 5)
	{
		if ((*stack_a)->number <= meanvalue)
			pb(stack_b, stack_a);
		else
			ra(stack_a);
		*stack_a = (*stack_a)->next;
		meanvalue = mean_value(stack_a);
	}
	ft_printf("stack a first step : %d\n", stack_a[1]);
	counting_sort(stack_a, stack_b);
}
