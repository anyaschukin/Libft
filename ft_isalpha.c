/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:48:34 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/15 16:17:59 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97	 && c <= 122)
		return (1);
	return (0);
}

int	main(void)
{
	int a;
	a = 67;

	printf("My function: %d \n", ft_isalpha(a));
	printf("C Standard function: %d \n", isalpha(a));
	return(0);
}
