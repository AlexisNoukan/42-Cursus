/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_waitlist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:29:11 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/20 18:13:35 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void	free_waitlist(Client **waitlist)
{
	Client	*temp;
	Client	*buffer;

	temp = *waitlist;
	while (temp)
	{
		free(temp->current_char);
		free(temp->message);
		buffer = temp;
		temp = temp->next;
		free(buffer);
	}
	free(waitlist);
	ft_error(0);
}
