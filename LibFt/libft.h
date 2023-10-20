/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:50:46 by anoukan           #+#    #+#             */
/*   Updated: 2023/10/20 09:59:25 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef LIBFT_H
# define LIBFT_H

int		ft_isalpha(char str)
int		ft_atoi(char *str)
int 	ft_isalnum(int i)
int 	ft_isacii(int c)
int 	ft_isdigit(int c)
int 	ft_isprint(int c)
char	*memset(char *s, int c, size_t len)
char  	*ft_strlcat(char *dest, char *src, int l)
size_t	ft_strlcpy(char *dest, char const *str, size_t l)
int		ft_strlen(char *str)
int 	ft_strncmp(char *s1, char *s2, unsigned int n)
char	*ft_strnstr(char *str, char *to_find, size_t len)

#endif
