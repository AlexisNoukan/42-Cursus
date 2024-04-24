/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:31:56 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/24 22:33:46 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	init_b(t_stack **a, t_stack **b)
{
	index_init(a);
	index_init(b);
	median_init(a);
	median_init(b);
	target_init(b, a);
	push_cost_init(b, a);
	cheapest_init(a);
}
