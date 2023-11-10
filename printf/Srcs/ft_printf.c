/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0003/11/20 13:05:51 by noukan            #+#    #+#             */
/*   Updated: 2023/11/10 19:51:07 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	char	*str;
	int		value;

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
			{
				value = va_arg(args, unsigned int);
				ft_putnbr_fd(value, 1);
				count += ft_countdigit(value);
			}
			else if (*format == 'X' || *format == 'x')
			{
				value = va_arg(args, int);
				if (*format == 'x')
					count += ft_hex(value, 0);
				else
					count += ft_hex(value, 1);
			}
			else if (*format == 'p')
				count += ft_pointertohex(va_arg(args, void *));
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
