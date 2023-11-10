/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0006/11/20 14:18:23 by noukan            #+#    #+#             */
/*   Updated: 2023/11/10 18:57:15 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex2(int n, char *alpha, char sign)
{
	char	hex[20];
	int		i;
	int		reminder;
	int		start;
	int		end;
	char	temp;
	int		isNegative;

	i = 0;
	if (n == 0)
		hex[i++] = '0';
	else
	{
		isNegative = 0;
		if (n < 0)
		{
			isNegative = 1;
			n = -n;
		}
		while (n > 0)
		{
			reminder = n % 16;
			hex[i++] = alpha[reminder];
			n /= 16;
		}
		if (isNegative == 1)
			hex[i++] = sign;
	}
	start = 0;
	end = i - 1;
	while (start < end)
	{
		temp = hex[start];
		hex[start] = hex[end];
		hex[end] = temp;
		start++;
		end--;
	}
	hex[i] = '\0';
	ft_putstr(hex);
	return (i);
}

int	ft_hex(int n, int params)
{
	char	*alpha;
	char	sign;
	char	*upperCase;
	char	*lowerCase;

	upperCase = "0123456789ABCDEF";
	lowerCase = "0123456789abcdef";
	if (params == 0)
	{
		alpha = lowerCase;
		sign = 'f';
	}
	else
	{
		alpha = upperCase;
		sign = 'F';
	}
	return (ft_hex2(n, alpha, sign));
}

int	ft_pointertohex(void *ptr)
{
	ft_putstr("0x");
	return (ft_hex((unsigned long)ptr, 0));
}
