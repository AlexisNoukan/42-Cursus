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
	if (!dst || !src)
		return (dst);
	if (cdst > csrc)
	{
		i = 0;
		while (i < len)
		{
			cdst[i] = csrc[i];
			++i;
		}
	}
	else if (cdst < csrc)
	{
		i = len;
		while (--i > len)
			cdst[i - 1] = csrc[i - 1];
	}
	return (dst);
}
/* int main()
{
	char str1[] = "Geeks"; // Array of size 100
	char str2[] = "Quiz"; // Array of size 5
	puts("str1 before memmove ");
	puts(str1);
    ft_memmove(str1, str2, sizeof(str2));
    puts("\nstr1 after memmove ");
    puts(str1);
    return (0);
}
*/
