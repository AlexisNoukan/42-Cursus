/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saliinger <saliinger@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:56:44 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/12 17:51:27 by saliinger        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	rotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tail;

	if (ft_lstsize2(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast2(head);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
	return (0);
}

int	ra(t_stack **a)
{
	if (rotate(a) == -1)
		return (-1);
	ft_printf("ra", 1);
	return (0);
}

int	rb(t_stack **b)
{
	if (rotate(b) == -1)
		return (-1);
	ft_printf("rb", 1);
	return (0);
}

int	rotate_rotate(t_stack **a, t_stack **b)
{
	if (ft_lstsize2(*a) < 2 || ft_lstsize2(*b) < 2)
		return (-1);
	rotate(a);
	rotate(b);
	ft_printf("rr", 1);
	return (0);
}
