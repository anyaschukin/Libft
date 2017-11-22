/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 10:37:31 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/21 18:21:04 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memcmp() function compares the first n characters of the object 
 * pointed to by s1 to the first n characters of the object pointed to by s2.
 * Returns an integer > = < than 0, accordingly as the object
 * pointed to by s1 is > = < than the object pointed to by s2.
 * Beware: Padding is indeterminate, strings need not fill 
 * their allotted space.
 */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *ps1;
	char *ps2;
	unsigned long i;

	ps1 = (char*) s1;
	ps2 = (char*) s2;
	i = 0;
	while (i < n)
	{
		if (ps1[i] != ps2[i])
		{
			return (ps1[i] - ps2[i]);
		}    
		i++;
	}
	return (0);
}
