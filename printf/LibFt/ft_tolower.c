/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:38:28 by anoukan           #+#    #+#             */
/*   Updated: 24/10/2023 11:34:25 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int n)
{
	if (n == '\0')
		return (n);
	if (n >= 'a' && n <= 'z')
		return (n);
	else if (n >= 'A' && n <= 'Z')
		return (n + 32);
	return (n);
}
