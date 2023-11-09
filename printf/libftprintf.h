/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0003/11/20 13:05:09 by noukan            #+#    #+#             */
/*   Updated: 2023/11/08 11:17:03 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int 	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(int n);
int 	pf_hex(int n, int params);
int 	pf_pointertohex(void *ptr);
size_t	ft_strlen(const char *str);
int     ft_countdigit(long n);
size_t  ft_strcpy(char *dest, const char *src);

#endif
