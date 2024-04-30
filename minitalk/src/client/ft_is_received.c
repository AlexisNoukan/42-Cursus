/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_received.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:46:31 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/30 14:49:17 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void	ft_is_received(int sig)
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
