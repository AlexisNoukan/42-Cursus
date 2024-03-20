/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:22:36 by anoukan           #+#    #+#             */
/*   Updated: 2024/03/20 12:16:54 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	reverse_rotate(t_stack **stack)
{
	t_list	*head;
	t_list	*tail;

	if (ft_lstsize2(stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast2(head);
	ft_lstadd_front2(tail);
	stack = head->next;
	tail->next = head;
	return (0);
}

int	rra(t_stack **a)
{
	if (reverse_rotate(a) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}

int	rrb(t_stack **b)
{
	if (reverse_rotate(b) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

int	rr(t_stack **a, t_stack **b)
{
	if (ft_lstsize2(*a) < 2 || ft_lstsize2(*b) < 2)
		return (-1);
	revers_rotate(a);
	reverse_rotate(b);
	ft_putendl_fd("rrr", 1);
	return (0);
}
