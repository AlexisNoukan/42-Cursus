/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:25:14 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/25 17:25:17 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void	sig_error(void)
{
	ft_printf("\n server: error\n");
	exit(EXIT_FAILURE);
}

void	extended_action(char *c, int *received, int *client_pid, int *bit)
{
	static char	*g_message = NULL;

	if (!g_message)
	{
		g_message = ft_strdup("");
		if (!g_message)
			sig_error();
	}
	g_message = ft_strjoin_frees1(g_message, (const char *)c);
	if (*c == '\0')
	{
		ft_printf("\n%s\n", g_message);
		ft_printf("\n%d signal recieved from client PID: %d\n", *received,
			*client_pid);
		*received = 0;
		*c = 0;
		free(g_message);
		g_message = NULL;
		if (kill(*client_pid, SIGUSR1) == -1)
			sig_error();
		return ;
	}
	*bit = 0;
}

void	action(int sig, siginfo_t *info, void *context)
{
	static int	client_pid;
	static int	bit;
	static char	c;
	static int	received;
	static int	current_pid;

	(void)context;
	if (!client_pid)
		client_pid = info->si_pid;
	current_pid = info->si_pid;
	if (client_pid != current_pid)
	{
		client_pid = current_pid;
		bit = 0;
		c = 0;
		received = 0;
	}
	c |= (sig == SIGUSR2);
	received++;
	bit++;
	if (bit == 8)
		extended_action(&c, &received, &client_pid, &bit);
	c <<= 1;
	usleep(100);
	kill(client_pid, SIGUSR2);
}

void	banner(pid_t pid)
{
	ft_printf("███████╗███████╗██████╗ ██╗   ██╗███████╗██████╗ \n");
	ft_printf("██╔════╝██╔════╝██╔══██╗██║   ██║██╔════╝██╔══██╗\n");
	ft_printf("███████╗█████╗  ██████╔╝██║   ██║█████╗  ██████╔╝\n");
	ft_printf("╚════██║██╔══╝  ██╔══██╗╚██╗ ██╔╝██╔══╝  ██╔══██╗\n");
	ft_printf("███████║███████╗██║  ██║ ╚████╔╝ ███████╗██║  ██║\n");
	ft_printf("╚══════╝╚══════╝╚═╝  ╚═╝  ╚═══╝  ╚══════╝╚═╝  ╚═╝\n");
	ft_printf("pid : %d\n\n", pid);
}

int	main(void)
{
	pid_t				pid;
	struct sigaction	sig;

	pid = getpid();
	banner(pid);
	sig.sa_sigaction = action;
	sigemptyset(&sig.sa_mask);
	sig.sa_flags = SA_SIGINFO;
	while (1)
	{
		sigaction(SIGUSR1, &sig, 0);
		sigaction(SIGUSR2, &sig, 0);
		pause();
	}
	return (EXIT_FAILURE);
}
