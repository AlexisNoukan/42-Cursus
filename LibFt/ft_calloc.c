/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0003/10/20 17:26:08 by noukan            #+#    #+#             */
/*   Updated: 2023/10/31 09:41:04 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*i;

    if (size != 0 && count > SIZE_MAX / size)
        return NULL;
	i = malloc(count * size);
	if (i)
	{
		ft_bzero(i, count * size);
		return (i);
	}
	return (NULL);
}
