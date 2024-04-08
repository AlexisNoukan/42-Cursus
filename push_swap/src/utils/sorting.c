/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saliinger <saliinger@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:08:19 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/08 17:02:40 by saliinger        ###   ########.fr       */
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
	t_stack	*temp;

	sorted = NULL;
	current = *stack_a;
	while (current != NULL)
	{
		next = current->next;
		if (sorted == NULL || sorted->number >= current->number)
		{
			current->next = sorted;
			sorted = current;
		}
		else
		{
			temp = sorted;
			while (temp->next != NULL && temp->next->number < current->number)
			{
				temp = temp->next;
			}
			current->next = temp->next;
			temp->next = current;
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
