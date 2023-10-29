/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0007/10/20 10:29:27 by noukan            #+#    #+#             */
/*   Updated: 2023/10/28 23:35:42 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stddef.h>
#include <stdio.h>

int	ft_digits(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
    {
	    i++;
        n = -n;
    }
		while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	ft_itoa_2(long nbr, char *dest, size_t *i)
{
	if (nbr >= 10)
	{
		ft_itoa_2(nbr / 10, dest, i);
		ft_itoa_2(nbr % 10, dest, i);
	}
	if (nbr < 10)
		dest[(*i)++] = nbr + '0';
}

char	*ft_itoa(int n)
{
	char	*dest;
	size_t		i;
	long	nbr;

	nbr = n;
	dest = malloc(ft_digits(nbr) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		dest[i++] = '-';
		nbr = -nbr;
	}
	ft_itoa_2(nbr, dest, &i);
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	int		max_int;
	int		min_int;
	int		number;
	char	*max_str;
	char	*min_str;
	char	*number_str;

	max_int = 2147483647;
	min_int = -2147483648;
	number = -5859;
	max_str = ft_itoa(max_int);
	min_str = ft_itoa(min_int);
	number_str = ft_itoa(number);
	if (max_str)
	{
		printf("Max Int: %s\n", max_str);
		free(max_str);
	}
	else
	{
		printf("Conversion of Max Int failed.\n");
	}
	if (min_str)
	{
		printf("Min Int: %s\n", min_str);
		free(min_str);
	}
	else
	{
		printf("Conversion of Min Int failed.\n");
	}
	if (number_str)
	{
		printf("Number: %s\n", number_str);
		free(number_str);
	}
	else
	{
		printf("Conversion of Number failed.\n");
	}
	return (0);
}*/

