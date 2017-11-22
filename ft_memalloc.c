/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 10:17:45 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/21 12:15:20 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void* ft_memalloc(size_t size)
{
	void* new;

	new = (void*) malloc(size * sizeof(size_t));
	if (!new)
		return(NULL);
	ft_bzero(new, size);
	return (new);
}

	if (!new(void*) malloc(size * sizeof(size_t))
