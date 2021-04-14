/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 09:15:29 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/14 17:13:55 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstapply(t_list *lst, t_list *start, void *(*f)(void *), void (*del)(void *))
{
	if (lst)
	{
		start = ft_lstnew(f(lst->content));
		if (!start)
		{
			del(start->content);
			free(start->content);
		}
		start->next = ft_lstapply(lst->next, start->next, f, del);
	}
	return (start);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;

	start = ft_lstapply(lst, start, f, del);
	return (start);
}
