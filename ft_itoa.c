/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrudowic <lrudowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 18:11:35 by lrudowic          #+#    #+#             */
/*   Updated: 2019/05/20 16:40:22 by lrudowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	f_len(int n)
{
	size_t	len;

	len = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while ((n = (n / 10)) > 0)
		len++;
	return (len);
}

char			*ft_itoa(int n)
{
	char	*res;
	size_t	len;
	int		sign;
	long	l;

	sign = 0;
	l = n;
	len = f_len(n);
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	res[len] = '\0';
	if (l < 0)
	{
		sign = 1;
		l *= -1;
	}
	while (len--)
	{
		res[len] = l % 10 + '0';
		l /= 10;
	}
	if (sign)
		res[0] = '-';
	return (res);
}
