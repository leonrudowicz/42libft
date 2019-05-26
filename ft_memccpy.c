/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrudowic <lrudowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:34:45 by lrudowic          #+#    #+#             */
/*   Updated: 2019/05/20 16:40:36 by lrudowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*des;
	char const		*sr;

	des = dst;
	sr = src;
	while (n--)
	{
		*des++ = *sr;
		if ((unsigned char)*sr == (unsigned char)c)
			return (des);
		sr++;
	}
	return (NULL);
}
