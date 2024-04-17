/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:34:52 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/17 15:02:03 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_init(char **argv, t_stack **a)
{
	char	**dest;
	int		i;
	t_stack	*new;
	int		j;

	dest = ft_split(argv[1], ' ');
	i = 0;
	j = ft_atoi(dest[i]);
	printf("j init : %d\n", j);
	while (dest[i])
	{
		j = ft_atoi(dest[i]);
		new = ft_lstnew2(j);
		ft_lstadd_front2(a, new);
		printf("new loop : %d\n", new->number);
		i++;
	}
	printf("init done\n");
	i = 0;
	while (dest[i])
	{
		printf("dest free %s\n", dest[i]);
		free(dest[i]);
		i++;
	}
	free(dest);
}

int	main(int argc, char **argv)
{
	t_stack	**a;
	t_stack	**b;

	a = (t_stack **)malloc(sizeof(t_stack **));
	b = (t_stack **)malloc(sizeof(t_stack **));
	a = NULL;
	b = NULL;
	if (argc < 2)
		return (-1);
	else if (argc != 2)
		return (0);
	ft_init(argv, a);
	ft_printf("initialized\n");
	ft_printf("stack a \n");
	ft_print(a);
	if (stack_sorted(a) == false)
		ft_sort(a, b);
	ft_printf("sorted\n");
	ft_printf("Stack A: \n");
	ft_print(a);
	ft_printf("Stack B: \n");
	ft_print(b);
	ft_free(a);
	ft_free(b);
	return (0);
}
