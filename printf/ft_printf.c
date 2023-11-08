/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0003/11/20 13:05:51 by noukan            #+#    #+#             */
/*   Updated: 2023/11/08 16:01:10 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	char	*str;
    int totalchars;
    int value;

	va_start(args, format);
	count = 0;
    totalchars = 0;
    value = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd' || *format == 'i')
			{
                value = va_arg(args, int);
                totalchars = ft_countdigit(value);
				ft_putnbr(value);
				count += totalchars;
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				if (str)
				{
					ft_putstr(str);
					count += ft_strlen(str);
				}
				else
				{
					ft_putstr("(null)");
					count += ft_strlen("(null)");
				}
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
		{
			ft_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

#include <stdio.h>

int	ft_printf(const char *format, ...);

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
	// Initialize variables to store character counts
	int countCharacter, countString, countPointer, countDecimal, countUnsigned,
		countLowerHex, countUpperHex, countPercent;
	countCharacter = ft_printf("Character: %c\n", character);
	countString = ft_printf("String: %s\n", string);
	countPointer = ft_printf("Pointer: %p\n", pointer);
	countDecimal = ft_printf("Decimal: %d\n", integer);
	countUnsigned = ft_printf("Unsigned Decimal: %u\n", unsignedInteger);
	countLowerHex = ft_printf("Hexadecimal (lowercase): %x\n", unsignedInteger);
	countUpperHex = ft_printf("Hexadecimal (uppercase): %X\n", unsignedInteger);
	countPercent = ft_printf("Percent Sign: %%\n");
	printf("Character Count: %d\n", countCharacter);
	printf("String Count: %d\n", countString);
	printf("Pointer Count: %d\n", countPointer);
	printf("Decimal Count: %d\n", countDecimal);
	printf("Unsigned Count: %d\n", countUnsigned);
	printf("Lower Hex Count: %d\n", countLowerHex);
	printf("Upper Hex Count: %d\n", countUpperHex);
	printf("Percent Count: %d\n", countPercent);
	return (0);
}
