/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:19:02 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/22 17:58:59 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Allocates (with malloc(3)) and returns a copy of the string
 * given as argument without whitespaces at the beginning or
 * at the end of the string. The following characters will be considered
 * as whitespaces: ’ ’, ’\n’ and ’\t’. If s has no whitespaces
 * at the beginning or at the end, the function returns
 * a copy of s. If the allocation fails the function returns NULL.
 */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char *smax;
	char *smin;
	char *fresh;
	int i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			i++;
		}
	smin = s[i];
	while (!(s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		{
			i++;
		}
	smax = s[i];
	if(!(fresh = (smax - smin + 2) * sizeof(char)))
		return (NULL);
	while (smin <= smax)     // fill in your fresh string with s1
	{

	}
	return (fresh);
}	
