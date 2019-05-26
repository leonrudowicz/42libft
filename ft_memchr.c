/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrudowic <lrudowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 16:45:31 by lrudowic          #+#    #+#             */
/*   Updated: 2019/05/20 16:40:37 by lrudowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *p;

	p = s;
	while (n-- != 0)
	{
		if ((unsigned char)c == *p++)
			return ((void *)(p - 1));
	}
	return (NULL);
}
