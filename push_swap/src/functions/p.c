/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:39:17 by anoukan           #+#    #+#             */
/*   Updated: 2024/03/21 12:46:17 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	push(t_stack **to, t_stack **from)
{
	t_stack	*temp;

	temp = *from;
	ft_lstadd_front2(to, temp);
	return (0);
}

int	pa(t_stack **a, t_stack **b)
{
	push(a, b);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_stack **b, t_stack **a)
{
	push(b, a);
	ft_putendl_fd("pb", 1);
	return (0);
}
