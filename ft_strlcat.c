/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschukin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:00:07 by aschukin          #+#    #+#             */
/*   Updated: 2017/11/20 15:28:41 by aschukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
size_t	*ft_strncat(char *dst, const char *src, size_t size)
{
	int i;
	int j;

	i = 0;
	j = 0;

}

























{
	char *d = dst;
	const char *s = src;
	size_t n = size;
	size_t dlen;

	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = size - dlen;

	if (n == 0)
	{
		return (dlen + ft_strlen(s));
	}
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + s - src));
}
