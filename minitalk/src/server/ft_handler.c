/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:12:23 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/21 10:12:09 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void	extend_handler(Client *current_client, pid_t current_pid, Client **waitlist)
{
	current_client->bit_received++;
	current_client->bit++;
	if (current_client->bit == 8)
	{
		current_client->message = ft_strjoin_frees1(current_client->message,
				current_client->current_char);
		current_client->bit = 0;
		if (current_client->current_char[0] == '\0')
		{
			print_message(current_client, waitlist);
			if (kill(current_pid, SIGUSR2) == -1)
				ft_error(1);
		}
		else
        {
            current_client->current_char[0] = 0;
            if (kill(current_pid, SIGUSR1) == -1)
                ft_error(1);
        }
	}
	else
    {
        current_client->current_char[0] <<= 1;
        usleep(100);
        if (kill(current_pid, SIGUSR1) == -1)
            ft_error(1);
    }
}

void	server_handler(int signum, siginfo_t *info, void *context)
{
	static Client	**waitlist;
	Client			*current_client;

	(void)context;
	if (!waitlist)
		waitlist = init_waitlist();
	current_client = find_client(info->si_pid, waitlist);
	if (current_client == NULL)
	{
		add_client(waitlist, info->si_pid);
		current_client = find_client(info->si_pid, waitlist);
		if (current_client == NULL)
		{
			free_waitlist(waitlist);
			return ;
		}
	}
	current_client->current_char[0] |= (signum == SIGUSR1);
	extend_handler(current_client, info->si_pid, waitlist);
}
