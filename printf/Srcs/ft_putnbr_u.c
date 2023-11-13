/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrr_ur_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:56:29 by anoukan           #+#    #+#             */
/*   Updated: 2023/11/13 15:01:15 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned long long nbr)
{
	if (nbr >= 0 && nbr <= 9)
		ft_printchar(nbr + '0');
	else if (nbr < 0)
	{
		ft_printchar('-');
		ft_putnbr_u(nbr * -1);
	}
	else
	{
		ft_putnbr_u(nbr / 10);
		ft_printchar(nbr % 10 + '0');
	}
}
