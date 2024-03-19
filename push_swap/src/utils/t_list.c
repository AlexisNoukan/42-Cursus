/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_list.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:19:51 by anoukan           #+#    #+#             */
/*   Updated: 2024/03/19 14:49:17 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*ft_lstnew2(int number)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (new_node)
	{
		new_node->number = number;
		new_node->index = -1;
		new_node->next = NULL;
	}
	return (new_node);
}

void	ft_lstadd_back2(t_stack **lst, t_stack *new)
{
	t_stack	*temp;

	if (lst && new)
	{
		if (!*lst)
			*lst = new;
		else
		{
			temp = *lst;
			while (temp->next)
				temp = temp->next;
			temp->next = new;
		}
	}
}

t_list	*ft_lstlast2(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

int	ft_lstsize2(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void	ft_lstadd_front2(t_stack **lst, t_stack *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
