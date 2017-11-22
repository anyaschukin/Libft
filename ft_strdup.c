/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:40:39 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/22 17:23:02 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The strdup() function allocates sufficient memory for a copy
 * of the string s1, does the copy, and returns a pointer to it.
 */

#include "libft.h"

size_t ft_strlen(const char *src)
{
	int n;
	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}
	return (n);
}

char *ft_strdup(const char *s1)
{
	int i;
	int n;
	char *s2;

	i = 0;
	n = ft_strlen(s1);
	s2 = malloc(n * sizeof(char));
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
