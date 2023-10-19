/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <anoukan@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:07:29 by anoukan           #+#    #+#             */
/*   Updated: 2023/10/19 13:07:37 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anoukan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:05:12 by anoukan           #+#    #+#             */
/*   Updated: 2023/10/19 10:05:43 by anoukan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
  unsigned int i;

  i = 0;
  while ((i < n) && (s1[i] || s2[i]))
  {
    if (s1[i] != s2[i])
      return(s1[i] - s2[i]);
    ++i;
  }
  return(0);
}

int	main(void)
{
	int	n = 50;
	char s1[] = "Hello";
	char s2[] = "Hqllo";

	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d", strncmp(s1, s2, n));
}
