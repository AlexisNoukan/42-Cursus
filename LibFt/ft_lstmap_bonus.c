/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*  ft_lstmap_bonus.c                                     :+:     :+:    :+:  */
/*                                                      +:+ +:+        +:+    */
/*  By: anoukan <anoukan@student.42mulhouse.fr>       +#+  +:+      +#+       */
/*                                                  +#+#+#+#+#+  +#+          */
/*  Created: 30/10/2023 09:40:34 by anoukan              #+#   #+#            */
/*  Updated: 30/10/2023 09:40:34 by anoukan             ###  ##########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new;
    t_list  *current;
    void    *temp;

    new = NULL;
    while (lst)
    {
        temp = (*f)(lst->content);
        current = ft_lstnew(temp);
        if (!current)
        {
            free(temp);
            ft_lstclear(&new, del);
            return (NULL);
        }
        ft_lstadd_back(&new, current);
        lst = lst->next;
    }
    return (new);
}
