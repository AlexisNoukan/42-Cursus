/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_client.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:13:07 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/20 18:15:51 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void	add_client(Client **waitlist, pid_t pid)
{
	Client	*new;
	Client	*top;

	top = *waitlist;
	new = (Client *)malloc(sizeof(Client));
	if (!new)
	{
		printf("!new\n");
		free_waitlist(waitlist);
	}
	new->current_char = (char *)malloc(sizeof(char) * 2);
	if (!new->current_char)
		free_waitlist(waitlist);
	new->current_char[0] = 0;
	new->current_char[1] = '\0';
	new->message = (char *)malloc(sizeof(char) * 1);
	new->message[0] = '\0';
	new->pid = pid;
	new->bit = 0;
	new->bit_received = 0;
	new->next = top;
	*waitlist = new;
	printf("add client : %d\n", (*waitlist)->pid);
}
