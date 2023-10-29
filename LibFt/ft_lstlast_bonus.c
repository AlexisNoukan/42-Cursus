/* ************************************************************************** */
/*                                                                            */
/*                                                         :::     ::::::::   */
/*  ft_lstlast_bonus.c                                    :+:     :+:    :+:  */
/*                                                      +:+ +:+        +:+    */
/*  By: anoukan <anoukan@student.42mulhouse.fr>       +#+  +:+      +#+       */
/*                                                  +#+#+#+#+#+  +#+          */
/*  Created: 29/10/2023 17:19:32 by anoukan              #+#   #+#            */
/*  Updated: 29/10/2023 17:19:32 by anoukan             ###  ##########.fr    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (NULL);
    while(lst->next != NULL)
        lst = lst->next;
    return (lst);
}
