/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*  ft_strrchr.c                                          :+:     :+:    :+:  */
/*                                                      +:+ +:+        +:+    */
/*  By: anoukan <anoukan@student.42mulhouse.fr>       +#+  +:+      +#+       */
/*                                                  +#+#+#+#+#+  +#+          */
/*  Created: 23/10/2023 14:05:17 by anoukan              #+#   #+#            */
/*  Updated: 23/10/2023 14:05:17 by anoukan             ###  ##########.fr    */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrchr(const char *s, int c)
{
    int     i;
    char    *str;

    str = (char *)s;
    i = ft_strlen(str);
    if (c == '\0')
        return(str + ft_strlen(str));
    while (str[i--])
    {
        if (str[i] == c)
            return (&str[i]);

    }
    return (0);
    
}
