/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrudowic <lrudowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 13:49:50 by lrudowic          #+#    #+#             */
/*   Updated: 2019/05/20 16:40:05 by lrudowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int r;
	int minus;

	r = 0;
	minus = 0;
	while (*str == ' ' || (*str > 8 && *str < 14))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		minus = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		r = r * 10 + *str - '0';
		str++;
	}
	if (minus)
		r = -r;
	return (r);
}
