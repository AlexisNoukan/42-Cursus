/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:25:08 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/25 17:25:18 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void	signal_error(void)
{
	ft_printf("\nclient: error.\n");
	exit(EXIT_FAILURE);
}

void	send_char(unsigned char c, int pid)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if (c & 128)
		{
			if (kill(pid, SIGUSR2) == -1)
				signal_error();
		}
		else
		{
			if (kill(pid, SIGUSR1) == -1)
				signal_error();
		}
		c <<= 1;
		bit++;
		pause();
		usleep(100);
	}
}

void	sent_text(char *str, int pid)
{
	int	i;

	i = 0;
	while (str[i])
		send_char(str[i++], pid);
	send_char('\0', pid);
}

void	received(int sig)
{
	static int	sent;

	if (sig == SIGUSR1)
	{
		ft_printf("%d signal sent successfully!\n", ++sent);
		exit(EXIT_SUCCESS);
	}
	if (sig == SIGUSR2)
		++sent;
}

int	main(int argc, char **argv)
{
	int	server_pid;
	int	client_pid;

	client_pid = getpid();
	ft_printf(" ██████╗██╗     ██╗███████╗███╗   ██╗████████╗\n");
	ft_printf("██╔════╝██║     ██║██╔════╝████╗  ██║╚══██╔══╝\n");
	ft_printf("██║     ██║     ██║█████╗  ██╔██╗ ██║   ██║   \n");
	ft_printf("██║     ██║     ██║██╔══╝  ██║╚██╗██║   ██║   \n");
	ft_printf("╚██████╗███████╗██║███████╗██║ ╚████║   ██║   \n");
	ft_printf(" ╚═════╝╚══════╝╚═╝╚══════╝╚═╝  ╚═══╝   ╚═╝   \n\n\n");
	ft_printf("\npid of the client : %d\n", client_pid);
	if (argc == 3)
	{
		signal(SIGUSR1, received);
		signal(SIGUSR2, received);
		server_pid = ft_atoi(argv[1]);
		ft_printf("Text currently sending.. \n");
		sent_text(argv[2], server_pid);
	}
	else
		ft_printf("usage: ./client <server_pid> <text to send>\n");
	return (EXIT_FAILURE);
}
