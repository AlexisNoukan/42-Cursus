/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:43:53 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/22 17:53:04 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	main(void)
{
	char	*str;

	str = "hello world";
	ft_printf("%s\n", str);
	ft_printf("%d", ft_strlen(str));
	return (0);
}
