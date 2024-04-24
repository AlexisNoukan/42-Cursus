/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cheapest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:25:57 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/24 23:43:16 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*get_cheapest(t_stack **s)
{
	t_stack	*temp;

	temp = *s;
	while (temp)
	{
		if (temp->cheapest == 1)
			return (temp);
		temp = temp->next;
	}
	return (temp);
}
