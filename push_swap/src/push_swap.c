/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:34:52 by anoukan           #+#    #+#             */
/*   Updated: 2024/05/20 21:54:38 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	**a;
	t_stack	**b;

	a = (t_stack **)malloc(sizeof(t_stack **));
	b = (t_stack **)malloc(sizeof(t_stack **));
	*a = NULL;
	*b = NULL;
	ft_init(argv, a);
	if (!is_sorted(a))
		ft_sort(a, b);
	ft_free(a);
	ft_free(b);
	return (0);
}
