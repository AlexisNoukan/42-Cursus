/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saliinger <saliinger@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 21:20:52 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/19 18:04:01 by saliinger        ###   ########.fr       */
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
	t_stack	*temp;

	int max = INT_MIN; // Initialize max to the smallest possible integer value
	temp = *stack;
	while (temp != NULL)
	{
		if (temp->number > max)
			max = temp->number;
		temp = temp->next;
	}
	return (max);
}

int	mean_value(t_stack **a)
{
	int		i;
	t_stack	*temp;
	int		n;
	int		result;

	i = ft_lstsize2(*a);
	temp = *a;
	n = 0;
	while (temp)
	{
		n += temp->number;
		temp = temp->next;
	}
	result = n / i;
	return (result);
}

void	ft_free(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*next;

	if (!stack)
		return ;
	temp = *stack;
	while (temp)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}

void	ft_print(t_stack **stack)
{
	t_stack	*temp;

	if (!stack || !*stack)
		return ;
	temp = *stack;
	while (temp)
	{
		ft_printf("%d\n", temp->number);
		if (temp->next == NULL)
			break ;
		temp = temp->next;
	}
}
