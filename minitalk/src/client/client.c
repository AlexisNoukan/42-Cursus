/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:43:20 by saliinger         #+#    #+#             */
/*   Updated: 2024/04/22 11:43:09 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

int		g_control;

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
		if (c & (1 << i))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		while (g_control != 1)
			usleep(10);
	}
}

void	send_message(pid_t pid, char *str)
{
	int		i;
	char	*my_pid;

	i = 0;
	my_pid = ft_itoa(getpid());
	while (my_pid[i])
	{
		send_char(my_pid[i], pid);
		i++;
	}
	i = 0;
	while (str[i])
	{
		send_char(str[i], pid);
		i++;
	}
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

int	main(int argc, char **argv)
{
	int	pid;
	int	my_pid;

	ft_printf(" ██████╗██╗     ██╗███████╗███╗   ██╗████████╗\n");
	ft_printf("██╔════╝██║     ██║██╔════╝████╗  ██║╚══██╔══╝\n");
	ft_printf("██║     ██║     ██║█████╗  ██╔██╗ ██║   ██║   \n");
	ft_printf("██║     ██║     ██║██╔══╝  ██║╚██╗██║   ██║   \n");
	ft_printf("╚██████╗███████╗██║███████╗██║ ╚████║   ██║   \n");
	ft_printf(" ╚═════╝╚══════╝╚═╝╚══════╝╚═╝  ╚═══╝   ╚═╝   \n\n\n");
	if (argc != 3)
		return (EXIT_FAILURE);
	pid = ft_atoi(argv[1]);
	my_pid = getpid();
	ft_printf("pid : %d\nmy pid : %d\n\n", pid, my_pid);
	ft_printf("Message : \n\n%s", argv[2]);
	signal(SIGUSR1, sig_usr);
	signal(SIGUSR1, sig_usr);
	while (1)
		sleep(1);
	return (0);
}
