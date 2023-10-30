/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*  ft_lstadd_back_bonus.c                                :+:     :+:    :+:  */
/*                                                      +:+ +:+        +:+    */
/*  By: anoukan <anoukan@student.42mulhouse.fr>       +#+  +:+      +#+       */
/*                                                  +#+#+#+#+#+  +#+          */
/*  Created: 29/10/2023 17:56:06 by anoukan              #+#   #+#            */
/*  Updated: 29/10/2023 17:56:06 by anoukan             ###  ##########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temp;
    if (lst && new)
    {
        if (!*lst)
            *lst = new;
        else
        {
            temp = *lst;
            while (temp->next)
                temp = temp->next;
            temp->next = new;
        }
    }

}
