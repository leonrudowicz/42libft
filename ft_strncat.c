/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrudowic <lrudowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 12:30:02 by lrudowic          #+#    #+#             */
/*   Updated: 2019/05/20 16:41:25 by lrudowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *res;

	res = s1;
	if (n)
	{
		while (*s1)
			s1++;
		while ((*s1++ = *s2++) != 0)
		{
			if (--n == 0)
			{
				*s1 = '\0';
				break ;
			}
		}
	}
	return (res);
}
