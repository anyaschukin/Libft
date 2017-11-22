/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:46:01 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/21 18:30:44 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int ended;

	i = 0;
	ended = 0;
	while (i < n)
	{
		if (src[i] == '\0')
			ended = 1;
		if (ended == 0)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	return (dest);
}
