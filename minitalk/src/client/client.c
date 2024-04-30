/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:25:08 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/30 12:07:59 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"


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
