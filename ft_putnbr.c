/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 14:16:02 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/22 16:02:05 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long a;

	a = nb;
	if (a < 0)
	{
		ft_putchar('-');
		a = a * -1;
	}
	if (a >= 10)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	else
		ft_putchar(a + '0');
}
