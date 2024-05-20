/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_client.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:17:35 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/20 18:17:36 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void	remove_client(Client *to_remove, Client **waitlist)
{
	Client	*temp;
	Client	*prev;
	Client	*next;

	temp = *waitlist;
	prev = NULL;
	while (temp && temp != to_remove)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return ;
	next = temp->next;
	if (prev == NULL)
		*waitlist = next;
	else
		prev->next = next;
	printf("free : %d\n", to_remove->pid);
	free(to_remove->current_char);
	free(to_remove->message);
	free(to_remove);
	temp = NULL;
}
