/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:59:45 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/21 15:39:22 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *Applies function f to each chararacter passed of the string
 *passed as an argument.
 *Each character is passed by address to f to be modified if necessary.
 */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		(*f)(&(s[i])); //applies function to alter character by address
		i++;
	}
}
