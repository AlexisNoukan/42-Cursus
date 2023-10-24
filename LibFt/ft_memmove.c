/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0002/10/20 12:20:50 by noukan            #+#    #+#             */
/*   Updated: 2023/10/23 12:43:01 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*csrc;
	unsigned char	*cdst;
	size_t			i;

	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	i = 0;
	if (cdst  == csrc)
		return (cdst);
	if (cdst > csrc && cdst < csrc + len)
	{
		i = len;
		while (i-- > 0)
			cdst[i] = csrc[i];
	}
	else
	{
        i = 0;
		while (i < len)
        {
			cdst[i] = csrc[i];
            ++i;
	
        }
    }
	return (cdst);
}
/*
 int main()
{
	char str1[] = "123"; // Array of size 100
	char str2[] = "321"; // Array of size 5
	puts("str1 before memmove ");
	puts(str1);
    ft_memmove(str1, str2, sizeof(str2));
    puts("\nstr1 after memmove ");
    puts(str1);
    return (0);
}*/

