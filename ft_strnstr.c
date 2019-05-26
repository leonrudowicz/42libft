/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrudowic <lrudowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 10:52:15 by lrudowic          #+#    #+#             */
/*   Updated: 2019/05/20 16:41:31 by lrudowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t	i;
	size_t	j;

	if (nee[0] == '\0')
		return ((char *)hay);
	i = 0;
	while (i < len && hay[i] != '\0')
	{
		j = 0;
		while (nee[j] != '\0')
		{
			if (i + j >= len || hay[i + j] != nee[j])
				break ;
			j++;
		}
		if (nee[j] == '\0')
			return ((char *)(hay + i));
		i++;
	}
	return (0);
}
