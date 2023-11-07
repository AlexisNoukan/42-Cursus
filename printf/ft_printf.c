/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0003/11/20 13:05:51 by noukan            #+#    #+#             */
/*   Updated: 2023/11/07 16:11:28 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
				ft_putnbr(va_arg(args, int));
				count++;
			}
			else if (*format == 's')
			{
				ft_putstr(va_arg(args, char *));
				count++;
			}
			else if (*format == 'c')
			{
				ft_putchar(va_arg(args, int));
				count++;
			}
			else if (*format == 'u')
			{
				ft_putnbr(va_arg(args, unsigned int));
				count++;
			}
			else if (*format == 'X' || *format == 'x')
			{
				if (*format == 'x')
				{
					pf_hex(va_arg(args, int), 0);
					count++;
				}
				else
				{
					pf_hex(va_arg(args, int), 1);
					count++;
				}
			}
			else if (*format == 'p')
			{
				pf_pointertohex(va_arg(args, void *));
				count++;
			}
			else if (*format == '%')
			{
				ft_putchar('%');
				count++;
			}
		}
		else
			ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}

/*
int	main(void)
{
	char			character;
	char			*string;
	int				integer;
	unsigned int	unsignedInteger;
	void			*pointer;

	character = 'A';
	string = "Hello, world!";
	integer = 42;
	unsignedInteger = 123;
	pointer = (void *)0x12345678;
	ft_printf("Character: %c\n", character);
	ft_printf("String: %s\n", string);
	ft_printf("Pointer: %p\n", pointer);
	ft_printf("Decimal: %d\n", integer);
	ft_printf("Unsigned Decimal: %u\n", unsignedInteger);
	ft_printf("Hexadecimal (lowercase): %x\n", unsignedInteger);
	ft_printf("Hexadecimal (uppercase): %X\n", unsignedInteger);
	ft_printf("Percent Sign: %%\n");
	return (0);
}
*/
