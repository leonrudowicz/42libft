/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrudowic <lrudowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:27:54 by lrudowic          #+#    #+#             */
/*   Updated: 2019/05/20 16:41:27 by lrudowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char *tmp;

	tmp = dst;
	while (n)
	{
		if ((*tmp = *src) != 0)
			src++;
		tmp++;
		n--;
	}
	return (dst);
}
