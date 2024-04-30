/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:31:38 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/30 14:52:17 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void	client_handler(int sig)
{
	int	bit_sent;

	bit_sent = 0;
	if (sig == SIGUSR1)
		bit_sent++;
	if (sig == SIGUSR2)
	{
		ft_printf("Message sent\n");
		exit(EXIT_SUCCESS);
	}
}
