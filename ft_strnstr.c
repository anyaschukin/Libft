/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 13:56:47 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/17 15:32:39 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Find the first occurrence of needle in haystack, where the search is
 * limited to the first size_t characters of needle
 */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	int j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char*) (haystack + i));
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	size_t len = 20;
	char haystack[] = "Find the unicorn in this haystack";
	char needle[] = "unicorn";
	printf("My function: %s\n", ft_strnstr(haystack, needle, len));
	printf("C Standard: %s\n", strnstr(haystack, needle, len));
	return (0);
}
