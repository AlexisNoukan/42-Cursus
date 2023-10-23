/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0009/10/20 17:39:49 by noukan            #+#    #+#             */
/*   Updated: 23/10/2023 14:04:24 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strchr(const char *s, int c)
{
    int     i;
    char    *str;

    i = 0;
    str = (char *)s;
    if (c == '\0')
        return(str + ft_strlen(str));
    while(str[i])
    {
        if (str[i] == c)
            return (&str[i]);
        i++;
    }
    return (0);
}
