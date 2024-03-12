/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:34:52 by anoukan           #+#    #+#             */
/*   Updated: 2024/03/12 21:45:26 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_init(char **argv, t_list2 **a)
{
	char	**dest;
	t_list2	*new;
	int		i;

	dest = ft_split(*argv, ' ');
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
	t_list2	**a;
	t_list2	**b;

	if (argc < 2)
		return (-1);
	a = (t_list2 **)malloc(sizeof(t_list2 *));
	b = (t_list2 **)malloc(sizeof(t_list2 *));
	*a = NULL;
	*b = NULL;
	ft_init(argv, a);
	ft_print(*a);
	return (0);
}
