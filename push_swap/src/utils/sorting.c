/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:08:19 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/05 13:24:42 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

bool	stack_sorted(t_stack **stack)
{
  t_stack *temp;

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

void  small_sort(t_stack **stack_a, t_stack **stack_b)
{
  return ;
}

void	ft_sort(t_stack **stack_a, t_stack **stack_b)
{
  int i;
  int n;

  i = is_max(stack_a);
	n = iterator(i);
  return ;
}
