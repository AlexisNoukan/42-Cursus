/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:48:49 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/22 11:02:16 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void	send_char(char c, pid_t pid)
{
	int	i;

	i = 7;
	while (i--)
	{
		if (kill(pid, 0) < 0)
		{
			ft_printf("ERROR : cna't send signal to pid\n");
			exit(EXIT_FAILURE);
		}
		if (c & (1 << bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
	}
}
