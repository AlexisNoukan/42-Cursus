/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:35:14 by anoukan           #+#    #+#             */
/*   Updated: 2024/03/13 13:13:34 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// --Lib--
# include "../LibFt/libft/libft.h"
# include <limits.h>
# include <stdbool.h>
# include <unistd.h>

// --Struct--
typedef struct s_stack
{
	int				number;
	int				index;
	bool			push_cost;
	bool			median;
	struct t_stack	*target;
	struct t_stack	*next;
	struct t_stack	*prev;
}					t_stack;
// --Functions--

// Sort
bool				stack_sorted(t_stack *stack);

//      t_list
void				ft_print(t_stack *a);
t_stack				*ft_lstnew2(int number);
void				ft_lstadd_back2(t_stack **lst, t_stack *new);

// Main

#endif