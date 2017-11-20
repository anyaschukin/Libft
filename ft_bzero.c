/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 17:27:29 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/20 10:57:25 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Writes n zeroed bytes into the string s
 * If n is zero, bzero() does nothing
 */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char *c;
	size_t i;

	c = (char*) s;
	i = 0;
	while (i < n)
	{	
		c[i] = '\0';
		i++;
	}
}

int	main(void)
{
	char s1[] = "Here is a unicorn";
	char s2[] = "Here is a unicorn";
	size_t n = 4;

	ft_bzero(s1, n);
	bzero(s2, n);
	printf("My function: %s\n", s1 + 4);
	printf("C Standard: %s\n", s2 + 4);
	return (0);
}
