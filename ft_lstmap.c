/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrudowic <lrudowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 14:12:44 by lrudowic          #+#    #+#             */
/*   Updated: 2019/05/20 16:40:31 by lrudowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(t_list *lst)
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst;
		free(lst);
		lst = tmp->next;
	}
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;
	t_list	*bgn;

	if (!lst || !f)
		return (NULL);
	if (!(res = ft_lstnew(lst->content, lst->content_size)))
		return (NULL);
	res = f(res);
	lst = lst->next;
	bgn = res;
	while (lst)
	{
		if (!(res->next = ft_lstnew(lst->content, lst->content_size)))
		{
			ft_free(bgn);
			return (NULL);
		}
		res->next = f(res->next);
		res = res->next;
		lst = lst->next;
	}
	return (bgn);
}
