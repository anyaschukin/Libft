/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:40:39 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/15 18:31:02 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen(char *src)
{
	int n;
	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}
	return (n);
}

char *ft_strdup(char *s1)
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
