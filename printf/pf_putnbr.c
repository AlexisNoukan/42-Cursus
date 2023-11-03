/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*  pf_putnbr.c                                           :+:     :+:    :+:  */
/*                                                      +:+ +:+        +:+    */
/*  By: anoukan <anoukan@student.42mulhouse.fr>       +#+  +:+      +#+       */
/*                                                  +#+#+#+#+#+  +#+          */
/*  Created: 03/11/2023 14:30:22 by anoukan              #+#   #+#            */
/*  Updated: 03/11/2023 14:30:22 by anoukan             ###  ##########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
		write(fd, "-2147483648", 11);
	else if (nb >= 0 && nb <= 9)
		ft_putchar_fd(nb + '0', fd);
	else if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(nb * -1, fd);
	}
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd(nb % 10 + '0', fd);
	}
}
