/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saliinger <saliinger@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:34:52 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/12 21:30:14 by saliinger        ###   ########.fr       */
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
		new = ft_lstnew2(atoi(dest[i]));
		ft_lstadd_back2(a, new);
		i++;
	}
	i = 0;
	while (dest[i])
	{
		free(dest[i]);
		i++;
	}
	free(dest);
}

void	ft_print(t_stack *stack)
{
	while (stack)
	{
		ft_printf("%d ", stack->number);
		stack = stack->next;
	}
	ft_printf("\n");
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**split_argv;
	int		i;
	t_stack	*temp;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (-1);
	else if (argc == 2)
	{
		split_argv = ft_split(argv[1], ' ');
		ft_init(split_argv, &a);
		i = 0;
		while (split_argv[i])
		{
			free(split_argv[i]);
			i++;
		}
		free(split_argv);
	}
	else
	{
		ft_init(argv, &a);
	}
	if (!stack_sorted(&a))
		ft_sort(&a, &b);
	ft_printf("Stack A: ");
	ft_print(a);
	ft_printf("Stack B: ");
	ft_print(b);
	while (a)
	{
		temp = a;
		a = a->next;
		free(temp);
	}
	while (b)
	{
		temp = b;
		b = b->next;
		free(temp);
	}
	return (0);
}
