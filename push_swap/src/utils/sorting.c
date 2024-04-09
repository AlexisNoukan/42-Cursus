/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:08:19 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/09 14:36:14 by anoukan          ###   ########.fr       */
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

void	counting_sort(t_stack **stack_a, int exp)
{
	int		count[10] = {0};
	t_stack	*output;
	t_stack	*current;
	t_stack	*next;
	int		index;
	t_stack	*temp;

	if (*stack_a == NULL)
		return ;
	output = NULL;
	current = *stack_a;
	while (current != NULL)
	{
		count[(current->number / exp) % 10]++;
		current = current->next;
	}
	for (int i = 1; i < 10; i++)
		count[i] += count[i - 1];
	current = *stack_a;
	while (current != NULL)
	{
		next = current->next;
		index = (current->number / exp) % 10;
		temp = (t_stack *)malloc(sizeof(t_stack));
		if (temp == NULL)
		{
			printf("Memory allocation failed\n");
			exit(1);
		}
		temp->number = current->number;
		temp->next = NULL;
		if (output == NULL)
			output = temp;
		else
		{
			temp->next = output;
			output = temp;
		}
		current = next;
	}
	*stack_a = output;
}

void	big_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	max;

	if (*stack_a == NULL)
		return ;
	max = is_max(*stack_q);
	for (int exp = 1; max / exp > 0; exp *= 10)
	{
		countingSort(stack_a, exp);
		while ((*stack_a)->number / exp == 0)
			ra(stack_q);
	}
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
