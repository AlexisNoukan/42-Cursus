/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saliinger <saliinger@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 21:20:52 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/12 21:30:41 by saliinger        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"



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

int	mean_value(t_stack **a)
{
	int		i;
	t_stack	*temp;
	int		n;

	i = ft_lstsize2(*a);
	temp = *a;
	n = 0;
	while (temp->next != NULL)
	{
		n += temp->number;
		temp = temp->next;
	}
	return (n / i);
}
