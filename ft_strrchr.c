/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:54:08 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/17 13:56:16 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *p;

	p = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			p = (char *) s;
		}
		s++;
	}
	return (p);
}

int	main(void)
{
	int c;

	char s[] = "Helloeoo";
	c = 101;
	printf("My function: %s\n", ft_strrchr(s, c));
	printf("C Standard: %s\n", strrchr(s, c));
	return (0);
}
