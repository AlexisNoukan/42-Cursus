/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:23:23 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/24 16:25:01 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	index_init(t_stack **s)
{
	t_stack	*temp;
	int		i;

	temp = *s;
	i = 0;
	while (temp)
	{
		temp->index = i;
		i++;
	}
}
