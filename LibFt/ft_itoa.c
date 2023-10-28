/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*  ft_itoa.c                                             :+:     :+:    :+:  */
/*                                                      +:+ +:+        +:+    */
/*  By: anoukan <anoukan@student.42mulhouse.fr>       +#+  +:+      +#+       */
/*                                                  +#+#+#+#+#+  +#+          */
/*  Created: 27/10/2023 10:29:27 by anoukan              #+#   #+#            */
/*  Updated: 27/10/2023 10:29:27 by anoukan             ###  ##########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int ft_digits(int n)
{
    int nb;

    nb = 0;
    while (n >= 10)
    {
        n = n % 10;
        nb++;
    }
    return (nb + 1);
}


char	*ft_putnbr(int nb, char *dest, int len)
{
    int negatif;
    int temp;
    int start;
    int i;

    negatif = (nb < 0) ? 1 : 0;
    temp = nb;
    if (temp < 0)
    {
        negatif = 1;
        temp = -temp;
    }
    if (negatif && ft_digits(nb) + 1 > len)
    {
        dest[0] = '\0';
        return (NULL);
    }
    start = negatif ? 1 : 0;
    i = start + ft_digits(nb) - 1;
    while (temp > 0)
    {
        dest[i] = (temp % 10) + '0';
        temp /= 10;
        i--;
    }
    dest[start + ft_digits(nb)] = '\0';
    return (dest);
}

char *ft_itoa(int n)
{
    if (n == INT_MIN)
    {
        char *dest = (char *)malloc(12);
        if (!dest)
        {
            return NULL;
        }
        return ft_putnbr(n, dest, 12);
    }
    else
    {
        char *dest;
        int len = ft_digits(n) + 1;

        dest = (char *)malloc(len);
        if (!dest)
        {
            return NULL;
        }
        return ft_putnbr(n, dest, len);
    }

}

#include <stdio.h>

int main()
{
    int max_int = 2147483647;
    int min_int = -2147483648;
    int number = 12345;

    char *max_str = ft_itoa(max_int);
    char *min_str = ft_itoa(min_int);
    char *number_str = ft_itoa(number);

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

    return 0;
}

