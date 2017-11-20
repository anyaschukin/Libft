/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 15:01:41 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/20 15:27:54 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}

int	main(void)
{
	char const *s = "Unicorn";
	ft_putendl(s);
	return (0);
}
