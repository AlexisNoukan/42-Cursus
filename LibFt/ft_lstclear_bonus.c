/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*  ft_lstclear_bonus.c                                   :+:     :+:    :+:  */
/*                                                      +:+ +:+        +:+    */
/*  By: anoukan <anoukan@student.42mulhouse.fr>       +#+  +:+      +#+       */
/*                                                  +#+#+#+#+#+  +#+          */
/*  Created: 30/10/2023 09:01:07 by anoukan              #+#   #+#            */
/*  Updated: 30/10/2023 09:01:07 by anoukan             ###  ##########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;
    if (lst && *lst)
    {
        while (*lst)
        {
            temp = *lst;
            *lst = temp->next;
            (*del)(temp->content);
            free(temp);
        }
    }
}
