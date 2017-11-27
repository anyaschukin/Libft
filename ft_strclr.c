/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:52:37 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/27 18:58:57 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Sets every character of the string to the value of '\0'
*/

#include "libft.h"

void	ft_strclr(char *s)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		s[i] = '\0';
		i++;
	}
}
