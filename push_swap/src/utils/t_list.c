/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_list.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:19:51 by anoukan           #+#    #+#             */
/*   Updated: 2024/03/12 13:15:39 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_list2	*ft_lstnew2(int number)
{
	t_list2	*new_node;

	new_node = (t_list2 *)malloc(sizeof(t_list2));
	if (new_node)
	{
		new_node->number = number;
		new_node->index = -1;
		new_node->next = NULL;
	}
	return (new_node);
}

void	ft_lstadd_back2(t_list2 **lst, t_list2 *new)
{
	t_list2	*temp;

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
