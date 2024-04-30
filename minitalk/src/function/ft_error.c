/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:08:45 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/30 12:11:15 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minitalk.h"

void	ft_error(int i)
{
	if (i == 0)
	{
		ft_printf("client: error");
		exit(EXIT_FAILURE);
	}
	else if (i == 1)
	{
		ft_printchar("server: error");
		exit(EXIT_FAILURE);
	}
	return ;
}
