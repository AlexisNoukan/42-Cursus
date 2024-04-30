/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:26:38 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/30 13:37:45 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void	server_handler(int signum, siginfo_t info, void *context)
{
	pid_t		client_pid;
	static char	current_char;

	client_pid = info.si_pid;
    
}
