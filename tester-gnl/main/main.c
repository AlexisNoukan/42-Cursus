/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:17:28 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/18 11:12:38 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;
	int		i;

	fd = open("../test/test.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Error opening the file.\n");
		return (1);
	}
	i = 0;
	while (i < 6)
	{
		line = get_next_line(fd);
		printf("this is the result      : %s\n", line);
		i++;
		free(line);
	}
	close(fd);
	return (0);
}
