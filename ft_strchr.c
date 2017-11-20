/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 18:33:32 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/16 15:51:35 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
		if (!*s++)
			return (0);
	return (char *)s;
}

int	main(void)
{
	int c;

	char s[] = "Hello";
	c = 101;
	printf("My function: %s\n", ft_strchr(s, c));
	printf("C Standard: %s\n", strchr(s, c));
	return (0);
}
