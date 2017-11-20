/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 10:22:00 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/20 10:23:26 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char*	newdst;
	const char*	newsrc;

	newdst = dst;
	newsrc = src;
	while (n > 0)
	{
		*newdst++ = *newsrc++;
		n--;
	}
	return (dst);
}

int		main(void)
{


	char dst[100];
	const char *src = "Unicorn";
	size_t n = 10;
	printf("My function: %s \n", (char *) ft_memcpy(dst, src, n));
	printf("C Standard: %s \n", (char *) memcpy(dst, src, n));
	return 0;
}

