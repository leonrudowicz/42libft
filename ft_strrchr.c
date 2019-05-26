/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrudowic <lrudowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 11:34:12 by lrudowic          #+#    #+#             */
/*   Updated: 2019/05/20 16:41:32 by lrudowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int i;

	i = 1;
	while (*s)
	{
		s++;
		i++;
	}
	while (i--)
	{
		if (*s == c)
			return ((char*)s);
		s--;
	}
	return (NULL);
}
