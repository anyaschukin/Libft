/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 11:55:15 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/22 14:29:20 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a “fresh” substring
 * from the string given as argument. The substring begins at
 * index start and is of size len. If start and len aren’t refering
 * to a valid substring, the behavior is undefined. If the
 * allocation fails, the function returns NULL.
 */

#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *fresh;
	unsigned int i;

	if (!(fresh = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	if (!s)
		return (0);
	while (i < len)
	{
		fresh[i] = s[i + start];
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
