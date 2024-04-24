/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:31:56 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/24 22:32:51 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	init_a(t_stack **a, t_stack **b)
{
	index_init(a);
	index_init(b);
	median_init(a);
	median_init(b);
	target_init(a, b);
	push_cost_init(a, b);
	cheapest_init(a);
}
