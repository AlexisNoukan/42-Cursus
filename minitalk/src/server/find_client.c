/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_client.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:05:27 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/20 18:13:39 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

Client	*find_client(pid_t client, Client **list)
{
	Client	*temp;

	if (!*list)
		return (NULL);
	temp = *list;
	while (temp)
	{
		if (temp->pid == client)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}
