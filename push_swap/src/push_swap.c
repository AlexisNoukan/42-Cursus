/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:34:52 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/24 15:23:14 by anoukan          ###   ########.fr       */
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
	if (argc < 2)
		return (-1);
	ft_init(argv, a);
	ft_printf("\n");
	ft_printf("Stack A: \n");
	ft_print(a);
	ft_printf("Stack B: \n");
	ft_print(b);
	ft_free(a);
	ft_free(b);
	return (0);
}
