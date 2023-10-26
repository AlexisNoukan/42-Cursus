/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0002/10/20 12:20:50 by noukan            #+#    #+#             */
/*   Updated: 2023/10/26 18:11:30 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*csrc;
	char		*cdst;
	size_t		i;

	cdst = (char *)dst;
	csrc = (const char *)src;
	i = len;
	if (cdst == NULL || csrc == NULL)
		return (cdst);
	if (cdst > csrc && cdst < csrc + len)
	{
		while (len--)
			cdst[len] = csrc[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			cdst[i] = csrc[i];
			i++;
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
