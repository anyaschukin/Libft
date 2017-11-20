/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:55:05 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/15 16:21:21 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}

int	main(void)
{
	printf("My function: %d \n", ft_isdigit(53));
	printf("C Standard Library: %d \n", isdigit(53));
}
