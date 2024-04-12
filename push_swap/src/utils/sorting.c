/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saliinger <saliinger@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:08:19 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/12 16:38:35 by saliinger        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

bool	stack_sorted(t_stack **stack)
{
	t_stack	*temp;

	if (!stack)
		return (-1);
	temp = *stack;
	while (temp->next)
	{
		if (temp->number > temp->next->number)
			return (false);
		temp = temp->next;
	}
	return (true);
}

void	counting_sort(t_stack **stack_a, t_stack **stack_b)
{
	while ((*stack_b)->next != NULL)
	{
		while ((*stack_a)->next != NULL)
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
	while ((*stack_a)->next != NULL && ft_lstsize2(*stack_a) >= 5)
	{
		if ((*stack_a)->number <= meanvalue)
			pb(stack_b, stack_a);
		else
			ra(stack_a);
		*stack_a = (*stack_a)->next;
		meanvalue = mean_value(stack_a);
	}
	counting_sort(stack_a, stack_b);
}
