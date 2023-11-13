/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0003/11/20 13:05:51 by noukan            #+#    #+#             */
/*   Updated: 2023/11/13 15:14:38 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		value;
	char	*str;

	va_start(args, format);
	count = 0;
	value = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				value = va_arg(args, int);
				ft_putnbr_fd(value, 1);
				count += ft_countdigit(value);
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				if (str)
					count += ft_putstr(str);
				else
					count += ft_putstr("(null)");
			}
			else if (*format == 'c')
				count += ft_printchar(va_arg(args, int));
			else if (*format == 'u')
				count += ft_uint(va_arg(args, unsigned long long));
			else if (*format == 'X' || *format == 'x')
				count += ft_hex(va_arg(args, unsigned int), *format);
			else if (*format == 'p')
				count += ft_pointertohex(va_arg(args, unsigned long long));
			else if (*format == '%')
				count += ft_printchar('%');
		}
		else
			count += ft_printchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
