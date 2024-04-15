/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:34:52 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/15 14:24:36 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_init(char **argv, t_stack **a)
{
	char	**dest;
	int		i;
	t_stack	*new;

	dest = ft_split(argv[1], ' ');
	i = 0;
	while (dest[i])
	{
		new = ft_lstnew2(ft_atoi(dest[i]));
		ft_lstadd_back2(a, new);
		i++;
		free(new);
	}
	i = 0;
	while (dest[i])
	{
		free(dest[i]);
		i++;
	}
	free(dest);
}

int	main(int argc, char **argv)
{
	t_stack	**a;
	t_stack	**b;

	ft_printf("%s\n", argv[1]);
	a = (t_stack **)malloc(sizeof(t_stack **));
	b = (t_stack **)malloc(sizeof(t_stack **));
	if (argc < 2)
		return (-1);
	else if (argc != 2)
		return (0);
	ft_init(argv, a);
	if (!stack_sorted(a))
		ft_sort(a, b);
	ft_printf("Stack A: ");
	ft_print(a);
	ft_printf("Stack B: ");
	ft_print(b);
	ft_free(a);
	ft_free(b);
	return (0);
}
