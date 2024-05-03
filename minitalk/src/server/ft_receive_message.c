/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_receive_message.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:54:34 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/03 15:17:50 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"


void	ft_receive_message(char c, int bit_recived, pid_t client_pid)
{
	static char	*message;
	char		*char_to_add;

	if (!message)
	{
		message = ft_strdup("");
		if (!message)
			ft_error(1);
	}
	char_to_add = (char *)malloc(sizeof(char) * 2);
	if (!char_to_add)
	{
		free(message);
		message = NULL;
		ft_error(1);
	}
	char_to_add[0] = c;
	char_to_add[1] = '\0';
	message = ft_strjoin_frees1(message, char_to_add);
	if (c == '\0')
	{
		ft_printf("%s", message);
		ft_printf("\nbit received: %d from: %d\n\n", bit_recived, client_pid);
		free(message);
		message = NULL;
        bit_recived = 0;
        if (kill(client_pid, SIGUSR2) == -1)
            ft_error(1);
	}
}
