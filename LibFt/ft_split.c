/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*  ft_split.c                                            :+:     :+:    :+:  */
/*                                                      +:+ +:+        +:+    */
/*  By: anoukan <anoukan@student.42mulhouse.fr>       +#+  +:+      +#+       */
/*                                                  +#+#+#+#+#+  +#+          */
/*  Created: 25/10/2023 13:45:58 by anoukan              #+#   #+#            */
/*  Updated: 25/10/2023 13:45:58 by anoukan             ###  ##########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t ft_countword(const char *s, char c)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while(s[i])
    {
        if (s[i] == c)
            j++;
        i++;
    }
    return  (j);
}

char **ft_split(char const *s, char c)
{
    size_t     word;
    size_t     letter;
    size_t     start;
    size_t     j;
    char    **dest;

    letter = 0;
    start = 0;
    j = 0;
    word = ft_countword(s, c);
    dest = (char **)malloc((word + 1) * sizeof(char *));

    if (dest == NULL)
        return (NULL);

    word = 0;

    while(s[letter])
    {
        if (s[letter] == '\0' || s[letter] == c)
        {
            dest[word] = ft_strdup(s + start);
            if (dest[word] == NULL)
            {
                while (j < word)
                {
                    free(dest[j]);
                    j++;
                }
                free(dest);
                return (NULL);
            }
            word++;
            start = letter + 1;
        }
        letter++;
    }

    dest[word] = NULL;
    return (dest);
}
