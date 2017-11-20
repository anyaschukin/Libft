/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 16:33:22 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/15 16:37:28 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	return((c >= 0 && c <= 127)? 1 : 0);
}

int	main(void)
{
	printf("My function: %d \n", ft_isascii(127));
	printf("C Standard: %d\n", isascii(127));
}
