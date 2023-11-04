/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*  pf_putstr.c                                           :+:     :+:    :+:  */
/*                                                      +:+ +:+        +:+    */
/*  By: anoukan <anoukan@student.42mulhouse.fr>       +#+  +:+      +#+       */
/*                                                  +#+#+#+#+#+  +#+          */
/*  Created: 03/11/2023 14:29:11 by anoukan              #+#   #+#            */
/*  Updated: 03/11/2023 14:29:11 by anoukan             ###  ##########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
}
