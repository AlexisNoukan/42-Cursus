/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nex_line.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:20:36 by anoukan           #+#    #+#             */
/*   Updated: 2023/12/11 14:28:05 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
//# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

//Buffer
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

// base function
char *get_next_line(int fd);

// utils function
int	ft_strlent(char const *s);
char	*ft_strjoin(char const *s1, char const *s2);




#endif
