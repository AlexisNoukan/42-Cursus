/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:44:14 by anoukan           #+#    #+#             */
/*   Updated: 2023/10/23 11:44:20 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (0);
	return (1);
}

int	main(void)
{
	printf("%d", ft_isdigit(4));
	printf("%d", isdigit(4));
}
