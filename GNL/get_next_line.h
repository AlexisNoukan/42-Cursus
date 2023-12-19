/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:20:36 by anoukan           #+#    #+#             */
/*   Updated: 2023/12/19 14:40:00 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
//# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

//Buffer
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

// base function
char 	*get_next_line(int fd);

// utils function
int		ft_strlen(char const *s);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strjoin(char const *s1, char const *s2);
char	ft_store(char *stash, char *buffer);
int		ft_verify(char *stash);
void		ft_line(char *stash, char *line);
char	*ft_clean(char *stash);
void	*ft_calloc(size_t count, size_t size);
#endif
