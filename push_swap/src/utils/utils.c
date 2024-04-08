/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saliinger <saliinger@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 21:20:52 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/07 19:46:23 by saliinger        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_print(t_stack *a)
{
	while (a)
	{
		ft_printf("%d", a->number);
		a = a->next;
	}
}

int	iterator(int i)
{
	int	n;

	while ((i % 10) != 0)
		++n;
	return (n);
}

int	is_max(t_stack **stack)
{
	int		i;
	t_stack	*temp;

	i = 0;
	temp = *stack;
	while (temp->next)
	{
		if (temp->number > i)
			i = temp->number;
	}
	return (i);
}
