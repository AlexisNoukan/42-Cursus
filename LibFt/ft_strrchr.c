/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0003/10/20 14:05:17 by noukan            #+#    #+#             */
/*   Updated: 2023/10/23 17:13:59 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"


char	*ft_strrchr(const char *s, int c)
{
	int		i;
	const char	*str;

	str = (const char *)s;
	i = ft_strlen(str);
	if (c == '\0')
		return ((char *)(str + i));
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)(str + i));
        i--;
	}
	return (NULL);
}

/*
int main() {
    const char *str = "Hello, World!";
    char target = 'o';
    // Use your ft_strrchr to find the last occurrence of the character 'o' in the string
    char *result1 = ft_strrchr(str, target);

    if (result1 != NULL) {
        printf("Your ft_strrchr: Last occurrence of '%c' found at index %ld\n", target, result1 - str);
    } else {
        printf("Your ft_strrchr: '%c' not found in the string.\n", target);
    }
    // Use the standard library strrchr
    char *result2 = strrchr(str, target);

    if (result2 != NULL) {
        printf("Standard strrchr: Last occurrence of '%c' found at index %ld\n", target, result2 - str);
    } else {
        printf("Standard strrchr: '%c' not found in the string.\n", target);
    }
    return 0;
}*/
