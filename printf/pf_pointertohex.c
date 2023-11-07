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

void	pf_pointertohex(void *ptr)
{
	unsigned long	cptr;

	cptr = (unsigned long)ptr;
	pf_hex(cptr, 0);
}
