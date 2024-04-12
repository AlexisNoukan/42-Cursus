/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saliinger <saliinger@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:39:17 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/12 17:10:20 by saliinger        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	push(t_stack **to, t_stack **from)
{
	t_stack	*temp;

	if (ft_lstsize2(*from) == 0)
		return (-1);
	temp = *from;
	ft_lstadd_front2(to, temp);
	*from = (*from)->next;
	return (0);
}

int	pa(t_stack **a, t_stack **b)
{
	if (push(a, b) == -1)
		return (-1);
	ft_printf("pa", 1);
	return (0);
}

int	pb(t_stack **b, t_stack **a)
{
	if (push(b, a) == -1)
		return (-1);
	ft_printf("pb", 1);
	return (0);
}
