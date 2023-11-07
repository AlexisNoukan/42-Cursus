/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*  pf_libft.h                                            :+:     :+:    :+:  */
/*                                                      +:+ +:+        +:+    */
/*  By: anoukan <anoukan@student.42mulhouse.fr>       +#+  +:+      +#+       */
/*                                                  +#+#+#+#+#+  +#+          */
/*  Created: 03/11/2023 13:05:09 by anoukan              #+#   #+#            */
/*  Updated: 03/11/2023 13:05:09 by anoukan             ###  ##########.fr    */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <unistd.h>
#include <stdarg.h>

int                 pf_printf(const char*format, ...);
void				ft_putchar(char c);
void				ft_putstr(char *s);
void				ft_putnbr(int n);
void                pf_hex(int n, int params);

#endif
