/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:50:22 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/15 16:42:33 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	return ((c >= 32 && c <= 126) ? 1 : 0);
}

int	main(void)
{
	printf("My function: %d\n", ft_isprint(150));
	printf("C Standard: %d\n", isprint(150));
	return (0);
}
