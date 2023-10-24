/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0003/10/20 10:30:01 by noukan            #+#    #+#             */
/*   Updated: 24/10/2023 11:33:56 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int n)
{
	if (n == '\0')
		return (n);
	if (n >= 'A' && n <= 'Z')
		return (n);
	else if (n >= 'a' && n <= 'z')
		return (n - 32);
	return (n);
}
/*int main()
{
	printf("%c\n", ft_toupper('a'));
}*/
