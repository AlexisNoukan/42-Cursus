/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*  ft_lstdelone_bonus.c                                  :+:     :+:    :+:  */
/*                                                      +:+ +:+        +:+    */
/*  By: anoukan <anoukan@student.42mulhouse.fr>       +#+  +:+      +#+       */
/*                                                  +#+#+#+#+#+  +#+          */
/*  Created: 30/10/2023 08:31:29 by anoukan              #+#   #+#            */
/*  Updated: 30/10/2023 08:31:29 by anoukan             ###  ##########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    t_list *temp;
    if (lst)
    {
        temp = lst;
        lst = temp->next;
        (*del)(temp->content);
        free(temp);
    }
}
