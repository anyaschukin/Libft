/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 14:16:02 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/20 15:59:57 by aschukin         ###   ########.fr       */
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

int	main(void)
{
	int nb = 145;
	ft_putnbr(nb);
	return (0);
}
