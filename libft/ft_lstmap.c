/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 09:15:29 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/14 14:06:23 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tail;

	head = ft_lstnew(f(lst->content));
	tail = head;
	while (tail)
	{
		tail = ft_lstnew(f(lst->content));
		lst = lst->next;
		tail = tail->next;
	}
	return (head);
}
