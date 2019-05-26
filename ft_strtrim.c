/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrudowic <lrudowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:14:11 by lrudowic          #+#    #+#             */
/*   Updated: 2019/05/20 16:41:37 by lrudowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		l;
	char	*trim;

	if (!s)
		return (NULL);
	i = -1;
	l = ft_strlen(s);
	while (s[l - 1] == ' ' || s[l - 1] == '\n' || s[l - 1] == '\t')
		l--;
	while (s[++i] == ' ' || s[i] == '\n' || s[i] == '\t')
		l--;
	if (l < 0)
		l = 0;
	if (!(trim = malloc(sizeof(char) * (l + 1))))
		return (NULL);
	s += i;
	i = -1;
	while (++i < l)
		trim[i] = *s++;
	trim[i] = '\0';
	return (trim);
}
