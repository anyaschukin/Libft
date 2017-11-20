/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:00:35 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/15 16:56:57 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_toupper(int c)
{
	if (c >=  97 && c <= 122)
	{
		c = c - 32;
		return (c);
	}
	return (0);
}

int	main(void)
{
	printf("My function: %d\n", ft_toupper(101));
	printf("C Standard: %d\n", toupper(101));
}
