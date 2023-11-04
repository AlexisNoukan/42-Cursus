/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*  ft_printf.c                                           :+:     :+:    :+:  */
/*                                                      +:+ +:+        +:+    */
/*  By: anoukan <anoukan@student.42mulhouse.fr>       +#+  +:+      +#+       */
/*                                                  +#+#+#+#+#+  +#+          */
/*  Created: 03/11/2023 13:05:51 by anoukan              #+#   #+#            */
/*  Updated: 03/11/2023 13:05:51 by anoukan             ###  ##########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

int ft_printf(const char *format, ...)
{
    char    *cformat;
    va_list args;
    va_start(args, format);
    int value;
    char *str;
    char c;

    *cformat = *format;
    
    while (*cformat)
    {
        if (*cformat == '%')
        {
            cformat++;
            if (*cformat == 'd')
            {
                value = va_arg(args, int);
                ft_putnbr(value);
            }
            else if (*cformat == 's')
            {
                str = va_arg(args, char *);
                ft_putstr(str);
            }
            else if (*cformat == 'c')
            {
                c = va_arg(args, int);
                ft_putchar(c);
            }
        }
        else {
            ft_putchar(*cformat);
        }
        cformat++;
    }

    return (0);
}
