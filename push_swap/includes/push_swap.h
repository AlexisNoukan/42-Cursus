/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:35:14 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/23 15:48:37 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//		--Lib--
# include "../LibFt/libft/libft.h"
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <unistd.h>

//		--Struct--
typedef struct s_stack
{
	int				number;
	int				index;
	int				push_cost;
	int				above_median;
	int				cheapest;
	struct s_stack	*target;
	struct s_stack	*prev;
	struct s_stack	*next;
}					t_stack;
//		--Functions--

//		--Sort--
bool				stack_sorted(t_stack **stack);
void				ft_sort(t_stack **stack_a, t_stack **stack_b);

//      --t_list--

t_stack				*ft_lstnew2(int number);
void				ft_lstadd_back2(t_stack **lst, t_stack *new);
t_stack				*ft_lstlast2(t_stack *lst);
void				ft_lstadd_front2(t_stack **lst, t_stack *new);
int					ft_lstsize2(t_stack *lst);

//		--Main--
void				ft_init(char **argv, t_stack **a);

//		--Rotate--
int					rotate(t_stack **stack);
int					ra(t_stack **a);
int					rb(t_stack **b);
int					rotate_rotate(t_stack **a, t_stack **b);
//		--Push--
int					push(t_stack **to, t_stack **from);
int					pa(t_stack **a, t_stack **b);
int					pb(t_stack **b, t_stack **a);
//		--Reverse Rotate--
int					reverse_rotate(t_stack **stack);
int					rra(t_stack **a);
int					rrb(t_stack **b);
int					rr(t_stack **a, t_stack **b);
//		--Swap--
int					swap(t_stack **stack_a, t_stack **stack_b);
int					sa(t_stack **a, t_stack **b);
int					sb(t_stack **b, t_stack **a);

//		--Utils--
int					is_max(t_stack **stack);
int					iterator(int i);
int					mean_value(t_stack **a);
void				ft_free(t_stack **stack);
void				ft_print(t_stack **a);

#endif
