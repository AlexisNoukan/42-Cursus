/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:41:11 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/30 14:44:14 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void	ft_send_message(char *str, pid_t server_pid)
{
	int	i;

	while (str[i])
	{
		ft_send_char(str[i], server_pid);
		i++;
	}
}
