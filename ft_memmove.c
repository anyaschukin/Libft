/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 10:31:19 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/21 18:22:54 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* memmove is just like memcpy, with one important difference:
 * instead of copying directly from `src` to `dst`,
 * memmove makes a temporary array, copies `src` into
 * this temporary array, then copies the temporary array into `dst`.
 * This function does the following:
 * 1. Allocates a temporary array of size `n`
 * 2. Copies `src` into this temporary array
 * 3. Copies this temporary array into `dst`
 */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char* newdst;
	const char* newsrc;

	newdst = dst;
	newsrc = src;
	while (n > 0)
	{
		*newdst++ = *newsrc++;
		n--;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char a[n];
	ft_memcpy(a, src, n);
	ft_memcpy(dst, a, n);
	return (dst);
}
