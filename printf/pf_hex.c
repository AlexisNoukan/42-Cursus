/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0006/11/20 14:18:23 by noukan            #+#    #+#             */
/*   Updated: 2023/11/07 16:11:48 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <limits.h>

int	pf_hex2(int n, char *alpha)
{
	char	hex[20];
	int		i;
	int		quotient;
	int		reminder;
	int		start;
	int		end;
	char	temp[20];
	int		isNegative;

	i = 0;
	isNegative = 0;
	if (n == 0)
		hex[i++] = '0';
	else
	{
		if (n < 0)
		{
			isNegative = 1;
			n = -n;
		}
		while (n > 0)
		{
			quotient = n / 16;
			reminder = n % 16;
			hex[i++] = alpha[reminder];
			n = quotient;
		}
		if (isNegative)
			hex[i++] = '-';
	}
	start = 0;
	end = i - 1;
	while (start < end)
	{
		*temp = hex[start];
		hex[start] = hex[end];
		hex[end] = *temp;
		start++;
		end--;
	}
	hex[i] = '\0';
	ft_putstr(hex);
    return (i);
}

int	pf_hex(int n, int params)
{
	char	*upperCase;
	char	*lowerCase;

	upperCase = "0123456789ABCDEF";
	lowerCase = "0123456789abcdef";
	if (params == 0)
		return(pf_hex2(n, lowerCase));
	else
		return(pf_hex2(n, upperCase));
}
