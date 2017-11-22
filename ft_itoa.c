/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 11:08:54 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/21 18:15:51 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Itoa converts an integer into a string.
 * int num is the integer we want to convert.
 * char *str is where we'll store it.
 */

<<<<<<< HEAD
#include "libft.h"

int ft_count(int num)
{
	int count;
	count = 0;

	if (num <= 0)
	{
		count = count + 1;
	}
	while (num != 0)
	{
		count++;
		num = num / 10;
	}

	return count;
=======
#include <stdio.h>
#include <stdlib.h>

int ft_count(int num)
{
    int count;
    count = 0;
    
    if (num <= 0)
    {
        count = count + 1;
    }
    while (num != 0)
    {
        count++;
        num = num / 10;
    }
    
    return count;
>>>>>>> 47bb7ba3511533886985dcb4949da9ca32db6b71
}

char *ds_itoa(int num)
{
<<<<<<< HEAD
	char *str;
	int count; 
	int i;

	count = ft_count(num);
	str = (char *) malloc(count * sizeof(char));
	i = count - 1;  // i is intialized as last character index of *str

	if (num == 0)
	{
		str[0] = '0';
	}
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	} 

	while (num > 0)
	{
		str[i] = '0' + (num % 10);
		num = num / 10;
		i--;
	}

	str[count] = '\0';

	return str;
=======
    char *str;
    int count; 
    int i;
    
    count = ft_count(num);
    str = (char *) malloc(count * sizeof(char));
    i = count - 1;  // i is intialized as last character index of *str
    
    if (num == 0)
    {
        str[0] = '0';
    }
    if (num < 0)
    {
        str[0] = '-';
		num = -num;
    } 
    
    while (num > 0)
    {
        str[i] = '0' + (num % 10);
        num = num / 10;
        i--;
    }
    
    str[count] = '\0';
    
    return str;
}

int main(void)
{
    int num = -45.6;
    printf("My function: '%s' \n", ds_itoa(num));
    //printf("C Standard: %s \n", itoa(num));
    return 0;
>>>>>>> 47bb7ba3511533886985dcb4949da9ca32db6b71
}
