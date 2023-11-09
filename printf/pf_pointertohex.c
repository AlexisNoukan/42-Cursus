/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_pointertohex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0007/11/20 11:39:26 by noukan            #+#    #+#             */
/*   Updated: 2023/11/07 16:09:51 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	pf_pointertohex(void *ptr)
{
    ft_putstr("0x");
	return (pf_hex((unsigned long)ptr, 0));
}
