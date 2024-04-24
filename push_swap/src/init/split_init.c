/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:05:10 by anoukan           #+#    #+#             */
/*   Updated: 2024/04/24 23:23:42 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	split_init(char **argv, t_stack **a)
{
	char	**temp;
	int		i;
	t_stack	*new;
	int		j;

	temp = ft_split(argv[2], ' ');
	i = 0;
	j = 0;
	while (temp[i])
	{
		while (temp[i][j])
		{
			if (temp[i][j] >= '0' && temp[i][j] <= '9')
				j++;
			else
				ft_error();
		}
		i++;
	}
	i = 0;
	while (temp[i])
	{
		new = ft_lstnew2(ft_atoi(temp[i]));
		ft_lstadd_front2(a, new);
		i++;
	}
}
