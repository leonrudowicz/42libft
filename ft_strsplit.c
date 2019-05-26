/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrudowic <lrudowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 15:24:01 by lrudowic          #+#    #+#             */
/*   Updated: 2019/05/20 16:41:33 by lrudowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	f_count(const char *str, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (!str[i])
			break ;
		word++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (word);
}

static void		f_cpy(char *dst, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

static size_t	f_cutter(const char *s, size_t words, char **r, char c)
{
	size_t	w;
	size_t	start;
	size_t	end;

	w = 0;
	start = 0;
	while (w < words && s[start])
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		if (!(r[w] = malloc(end - start + 1)))
			return (0);
		f_cpy(r[w], (char *)s + start, end - start);
		start = end + 1;
		w++;
	}
	return (1);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**r;
	size_t	words;

	if (!s)
		return (NULL);
	words = f_count(s, c);
	if (!words)
	{
		if (!(r = malloc(sizeof(*r))))
			return (NULL);
		r[0] = NULL;
		return (r);
	}
	if (!(r = malloc((words + 1) * sizeof(*r))))
		return (NULL);
	if (!f_cutter(s, words, r, c))
		return (NULL);
	r[words] = 0;
	return (r);
}
