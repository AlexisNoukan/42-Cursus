/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:34:52 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/05 13:25:58 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_init(char **argv, t_stack **a)
{
	char	**dest;
	t_stack	*new;
	int		i;

	dest = ft_split(argv[1], ' ');
	i = 0;
	while (dest[i])
	{
		new = ft_lstnew2(ft_atoi(dest[i]));
		ft_lstadd_back2(a, new);
		free(new);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	**a;
	t_stack	**b;

	*a = NULL;
	*b = NULL;
	if (argc < 2)
		return (-1);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	ft_init(argv, a);
	if (!stack_sorted(a))
		ft_sort(a, b);
	ft_print(*a);
	ft_print(*b);
	return (0);
}
