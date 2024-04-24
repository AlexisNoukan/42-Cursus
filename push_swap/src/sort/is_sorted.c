/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:16:36 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/24 16:22:00 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

bool	is_sorted(t_stack **a)
{
	t_stack	*new;
	int		i;

	new = *a;
	i = new->number;
	while (new)
	{
		if (new->next == *a)
			return (true);
		if (i > new->number)
			return (false);
		i = new->number;
		new = new->next;
	}
	return (true);
}
