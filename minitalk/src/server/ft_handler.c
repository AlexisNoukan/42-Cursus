/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:26:38 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/01 15:08:14 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

static void	server_handler_extend(char *current_char, int *bit,
		int *bit_received, pid_t client_pid)
{
	ft_receive_message(current_char, bit_received, client_pid);
	bit = 0;
	current_char = 0;
	if (!current_char)
		bit_received = 0;
}

void	server_handler(int signum, siginfo_t *info, void *context)
{
	static pid_t	client_pid;
	static char		current_char = 0;
	static int		bit = 0;
	static int		bit_received = 0;
	static pid_t	current_pid = 0;

	(void)context;
	if (!client_pid)
		client_pid = info->si_pid;
	current_pid = info->si_pids;
	if (current_pid != client_pid)
	{
		bit = 0;
		bit_received = 0;
		client_pid = current_pid;
	}
	if (bit == 8)
		server_handler_extend(&current_char, &bit, &bit_received, client_pid);
	current_char |= (signum == SIGUSR1);
	bit_received++;
	bit++;
	current_char <<= 1;
	usleep(100);
	if (kill(client_pid, SIGUSR1) == -1)
		ft_error(0);
}
