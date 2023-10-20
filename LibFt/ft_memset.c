/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:29:44 by anoukan           #+#    #+#             */
/*   Updated: 2023/10/20 11:41:13 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

void	*ft_memset(void *s, int c, int len)
{
	char	*str;

	str = s;
	while (len--)
		*str++ = c;
	return (s);
}

int	main()
{
	char tab[100];
//	printf("%s/n", memset(tab, 0, 4));
	printf("%s", ft_memset(tab, 'A', 4));
}
