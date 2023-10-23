/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*  ft_toupper.c                                          :+:     :+:    :+:  */
/*                                                      +:+ +:+        +:+    */
/*  By: anoukan <anoukan@student.42mulhouse.fr>       +#+  +:+      +#+       */
/*                                                  +#+#+#+#+#+  +#+          */
/*  Created: 23/10/2023 10:30:01 by anoukan              #+#   #+#            */
/*  Updated: 23/10/2023 10:41:09 by anoukan             ###  ##########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int ft_toupper(int n)
{
    if (n == '\0')
        return (n);
    if (n >= 'A' && n <= 'Z')
        return (n);
    else if (n >= 'a' && n <= 'z')
        return (n - 40);
    return (n);
}

int main()
{
    printf("%c\n", ft_toupper('a'));
}
