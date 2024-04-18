/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:56:44 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/18 15:20:18 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	rotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*second;

	if (ft_lstsize2(*stack) < 2)
		return (-1);
	head = *stack;
	second = head->next;
	while (head->next != NULL)
		head = head->next;
	head->next = *stack;
	*stack = second;
	head->next->next = NULL;
	return (0);
}

int	ra(t_stack **a)
{
	if (rotate(a) == -1)
		return (-1);
	ft_printf("ra\n", 1);
	ft_printf("stack a\n");
	ft_print(a);
	ft_printf("\n");
	return (0);
}

int	rb(t_stack **b)
{
	if (rotate(b) == -1)
		return (-1);
	ft_printf("rb\n", 1);
	return (0);
}

int	rotate_rotate(t_stack **a, t_stack **b)
{
	if (ft_lstsize2(*a) < 2 || ft_lstsize2(*b) < 2)
		return (-1);
	rotate(a);
	rotate(b);
	ft_printf("rr\n", 1);
	ft_printf("stack b\n");
	ft_print(b);
	ft_printf("\n");
	return (0);
}
