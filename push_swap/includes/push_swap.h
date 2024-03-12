/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:35:14 by anoukan           #+#    #+#             */
/*   Updated: 2024/03/12 10:24:54 by anoukan          ###   ########.fr       */
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
t_list				*ft_lstnew(int number);

// Main

#endif