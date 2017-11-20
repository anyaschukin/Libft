/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 11:08:54 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/20 13:40:25 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Itoa converts an integer into a string.
 * int num is the integer we want to convert.
 * char *str is where we'll store it.
 */

#include <stdio.h>
#include "libft.h"

int	count_digits(int num)
{
	int digits;
	digits = 0;

	while (num > 0)
	{
		digits++;
		num = num / 10;
	}
	return (digits);
}

char *ft_itoa(int num, char *str, int base)
{
	int digits;
	int i;

	if (num < 0)
	{
		str[0] = '-';
		num = -num;
		digits = 1;
	}
	else 
	{
		digits = 0;
	}
	digits = digits + count_digits(num);
	i = digits - 1;
	while (num > 0 )
	{
		str[i] = '0' + (num % 10);
		num = num / 10;
		i--;
	}
	str[digits]= '\0';
	return (str);
}

int	main(void)
{
	int num = 109;
	char str[100];
	int 
}
