/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saliinger <saliinger@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:43:20 by saliinger         #+#    #+#             */
/*   Updated: 2024/04/20 23:29:16 by saliinger        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

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
	while (1)
		sleep(1);
	return (0);
}
