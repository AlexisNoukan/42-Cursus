/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:43:53 by anoukan           #+#    #+#             */
/*   Updated: 2023/10/23 12:42:08 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(char str)
{
	if (str == '\0')
		return (1);
	if (!((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z')))
		return (0);
	return (1);
}

int	main(void)
{
	char	c;
	int		i;

	c = 'C';
	i = ft_isalpha(c);
	printf("%d", i);
}
