/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:43:20 by saliinger         #+#    #+#             */
/*   Updated: 2024/04/22 15:07:52 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

int		g_control;

void	send_char(char c, pid_t pid)
{
	int	i;

	i = 7;
	ft_printf("sending 1 char\n");
	while (i >= 0)
	{
		if (kill(pid, 0) < 0)
		{
			ft_printf("ERROR : can't send signal to pid\n");
			exit(EXIT_FAILURE);
		}
		if (c & (1 << i))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i--;
		while (g_control != 1)
			usleep(10);
		g_control = 0;
	}
}

void	send_pid(char c, pid_t pid)
{
	int	bit;

	bit = 7;
	while (bit >= 0)
	{
		if (kill(pid, 0) < 0)
		{
			ft_putendl_fd("ERROR : cant send sig to pid", 1);
			exit(EXIT_FAILURE);
		}
		if (c & (1 << bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		bit--;
		usleep(1000);
	}
}

void	send_message(pid_t pid, char *str, char *my_pid)
{
	int	i;

	i = 0;
	ft_printf("\nsending\n");
	while (my_pid[i])
	{
		send_pid(my_pid[i], pid);
		i++;
	}
	ft_printf("pid sent\n");
	i = 0;
	while (str[i])
	{
		send_char(str[i], pid);
		i++;
	}
	ft_printf("message sent\n");
	send_char(0, pid);
}

void	sig_usr(int sig)
{
	if (sig == SIGUSR1)
		g_control = 1;
	else if (sig == SIGUSR2)
	{
		ft_printf("Message received");
		exit(EXIT_SUCCESS);
	}
}

void	ascii_art(void)
{
	ft_printf(" ██████╗██╗     ██╗███████╗███╗   ██╗████████╗\n");
	ft_printf("██╔════╝██║     ██║██╔════╝████╗  ██║╚══██╔══╝\n");
	ft_printf("██║     ██║     ██║█████╗  ██╔██╗ ██║   ██║   \n");
	ft_printf("██║     ██║     ██║██╔══╝  ██║╚██╗██║   ██║   \n");
	ft_printf("╚██████╗███████╗██║███████╗██║ ╚████║   ██║   \n");
	ft_printf(" ╚═════╝╚══════╝╚═╝╚══════╝╚═╝  ╚═══╝   ╚═╝   \n\n\n");
}

int	main(int argc, char **argv)
{
	pid_t	pid;
	char	*my_pid;

	if (argc != 3)
		return (EXIT_FAILURE);
	ascii_art();
	pid = ft_atoi(argv[1]);
	if (pid <= 0)
	{
		ft_printf("Invalid process ID\n");
		return (EXIT_FAILURE);
	}
	my_pid = ft_itoa(getpid());
	ft_printf("pid : %d\nmy pid : %s\n\n", pid, my_pid);
	ft_printf("Message : \n\n%s", argv[2]);
	signal(SIGUSR1, sig_usr);
	signal(SIGUSR2, sig_usr);
	send_message(pid, argv[2], my_pid);
	while (1)
		sleep(1);
	return (0);
}
