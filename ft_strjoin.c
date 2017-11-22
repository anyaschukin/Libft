/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 14:29:53 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/22 15:30:55 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Allocates (with malloc(3)) and returns a “fresh” string ending
 * with ’\0’, result of the concatenation of s1 and s2. 
 * If the allocation fails the function returns NULL.
 */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *fresh;

	if (!(fresh = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	if (s1)
		ft_strcpy(fresh, s1);
	if (s2)
		ft_strcat(fresh, s2);
	return (fresh);
}
