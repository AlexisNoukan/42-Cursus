/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 21:36:37 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/24 21:42:50 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	cheapest_init(t_stack **s)
{
	t_stack	*temp;
	long	cheap;
	t_stack	*cheapest;

	temp = *s;
	cheap = LONG_MAX;
	while (temp)
	{
		if (temp->push_cost < cheap)
		{
			cheapest = temp;
			cheap = temp->push_cost;
		}
		temp = temp->next;
	}
	cheapest->cheapest = 1;
}
