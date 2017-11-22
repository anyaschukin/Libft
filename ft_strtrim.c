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
	size_t start;
	size_t end;
	char *fresh;
	int i;

	i = 0;
	start = 0;
	end = ft_strlen(s);
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		{
			start++;
		}
	while (!(s[end - 1] == ' ' || s[end - 1] == '\n' || s[end - 1] == '\t'))
		{
			end--;
		}
	fresh = ft_strnew(end - start);
	if (fresh == NULL)
		return (NULL);
	fresh = ft_strncpy(fresh, s + start, end - start);
	return (fresh);
}	
