/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 11:59:25 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/21 14:53:03 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *Allocates with malloc and returns a 'fresh' string ending with '\0'.
 *Each character of the string is initialized at '\0'
 *If the allocation fails, the funciton returns NULL.
 */

#include "libft.h"

char* ft_strnew(size_t size)
{
	char *new;
	int i;

	i = 0;
	new = (char*) malloc((size + 1) * sizeof(size_t));
	if (!new)
		return (NULL);
	ft_bzero(new, size);
	while (new[i])
	{
		new[i] = '\0';
		i++;
	}
	return (new);
}
