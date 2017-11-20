/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 10:34:49 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/20 10:36:22 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memchr() function returns a pointer to the located character,
 *or a null pointer if the character does not occur in the object.
 */

#include <stdio.h>
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	char *p;

	i = 0;
	p = (char*)s;
	while(i < n)
	{ 
		if( *p != (char)c )
		{   
			p++;
			i++;
		}    
		else
		{    
			return (p);
		}    
	}    
	return (0);
}

int main(void)
{
	char *s = "Unicorn";
	int c = 'i';
	size_t n = 5;
	printf("My function: %s \n", (char *) ft_memchr(s, c, n));
	printf("C Standard: %s \n", (char *) memchr(s, c, n));
	return 0;
}
