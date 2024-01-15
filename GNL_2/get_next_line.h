/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:42:12 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/15 13:52:39 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

//Include
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

//Buffer
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

//Functions
char	*get_next_line(int fd);
void	read_and_add(int fd, char **line, char **stash, int *readed);
int		found_newline(char *stash);
char	*ft_strjoin(char *s1, char *s2);
void	free_stash(char *line);
int		ft_strlen(char *str);
char	*ft_strdup(char *str);
void	extract_line(char *stash, char **line);
void	clear_stash(char **stash);

#endif
