/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:35:14 by anoukan           #+#    #+#             */
/*   Updated: 2024/03/12 11:18:07 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// Lib
# include "../LibFt/libft/libft.h"
# include <unistd.h>

// Struct
typedef struct s_list
{
	int				number;
	int				index;
	struct s_list	*next;
}					t_list;
// Functions

//      t_list
void				ft_print(t_list *a);
t_list				*ft_lstnew2(int number);

// Main

#endif