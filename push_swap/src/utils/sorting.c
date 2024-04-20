/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saliinger <saliinger@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:08:19 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/20 12:45:07 by saliinger        ###   ########.fr       */
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
	while (*stack_b != NULL)
	{
		while (*stack_a != NULL && *stack_b != NULL)
		{
			if ((*stack_b)->number - (*stack_a)->number < 0)
				pa(stack_a, stack_b);
			else
				ra(stack_a);
		}
		if (*stack_b && (*stack_b)->next != NULL)
			*stack_b = (*stack_b)->next;
		else
			break ;
	}
	while (ft_lstlast2(*stack_a)->number != is_max(stack_a))
		ra(stack_a);
	printf("base sort done\n");
}

void	ft_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	meanvalue;

	if (*stack_a == NULL)
		return ;
	meanvalue = mean_value(stack_a);
	while (ft_lstsize2(*stack_a) >= 6)
	{
		printf("mean value : %d\n", meanvalue);
		if ((*stack_a)->number < meanvalue)
			pb(stack_b, stack_a);
		else
			ra(stack_a);
		meanvalue = mean_value(stack_a);
	}
	counting_sort(stack_a, stack_b);
}
