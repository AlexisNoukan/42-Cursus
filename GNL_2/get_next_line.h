/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:42:12 by anoukan           #+#    #+#             */
/*   Updated: 2024/01/09 13:20:20 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

//Include
# include <stdio.h>

//Main
char    *get_next_line(int fd);
char	*ft_clean(char *stash);

//Utils
int     ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strjoin(char *s1, char *s2);
int     ft_verify(char *stash);
void    ft_free(char *stash);


#endif