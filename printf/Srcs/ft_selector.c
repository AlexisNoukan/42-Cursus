/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:01:50 by anoukan           #+#    #+#             */
/*   Updated: 2023/11/14 14:30:06 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_selector(char format, va_list args, int *count)
{
	if (format == 'd' || format == 'i')
		*count += ft_decimal(va_arg(args, int));
	else if (format == 's')
		*count += ft_string(va_arg(args, char *));
	else if (format == 'c')
		*count += ft_printchar(va_arg(args, int));
	else if (format == 'u')
		*count += ft_uint(va_arg(args, int));
	else if (format == 'X' || format == 'x')
		*count += ft_hex(va_arg(args, unsigned int), format);
	else if (format == 'p')
		*count += ft_pointertohex(va_arg(args, unsigned long long));
	else if (format == '%')
		*count += ft_printchar('%');
}
