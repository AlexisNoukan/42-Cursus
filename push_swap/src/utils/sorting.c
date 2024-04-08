/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saliinger <saliinger@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:08:19 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/08 19:37:32 by saliinger        ###   ########.fr       */
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

void	small_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*sorted;
	t_stack	*current;
	t_stack	*next;

	sorted = NULL;
	current = *stack_a;
	while (current != NULL)
	{
		next = current->next;
		if (sorted == NULL || sorted->number >= current->number)
			push(&sorted, current->number);
		else
		{
			while (sorted != NULL && sorted->number < current->number)
			{
				pa(stack_a, stack_b);
				sa(stack_a);
				ra(stack_a);
			}
			ft_lstadd_front2(&sorted, current->number);
			while (*stack_b != NULL)
				pa(stack_a, stack_b);
			while ((*stack_a)->number != sorted->number)
				ra(stack_a);
		}
		current = next;
	}
	*stack_a = sorted;
}

void	big_sort(t_stack **stack_a, t_stack **stack_b)
{
	return ;
}

void	ft_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	i;

	i = ft_lstsize(stack_a);
	if (i > 10)
		big_sort(stack_a, stack_b);
	else
		small_sort(stack_a, stack_b);
}
