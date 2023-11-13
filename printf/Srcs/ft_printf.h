/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0003/11/20 13:05:09 by noukan            #+#    #+#             */
/*   Updated: 2023/11/13 15:33:25 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../LibFt/libft.h"
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);

// Char/String part
int		ft_printchar(char c);
int		ft_putstr(char *str);

// Decimal part
int		ft_countdigit(long nbr);

// Unsigned Int
int		ft_uint(unsigned long long nbr);
int		ft_countdigit_u(unsigned long long nbr);
void	ft_putnbr_u(unsigned long long nbr);

// Hex part
int		ft_hex(unsigned int nbr, const char c);
int		ft_hexcount(unsigned int n);
int		ft_pointertohex(unsigned long long ptr);
int		ft_ptrlen(uintptr_t ptr);

#endif
