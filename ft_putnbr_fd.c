/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 15:56:50 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/20 16:15:21 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd);

void	ft_putnbr_fd(int nb, int fd)
{
	long a;

	a = nb;
	if (a < 0)
	{
		ft_putchar_fd('-');
		a = a * -1;
	}
	if (a >= 10)
	{
		ft_putnbr_fd(a / 10);
		ft_putnbr_fd(a % 10);
	}
	else
		ft_putchar_fd(a + '0');
}

int	main(void)
{
	int nb = 145;
	ft_putnbr_fd(nb);
	re	turn (0);
}
