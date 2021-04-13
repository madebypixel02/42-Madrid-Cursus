/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 09:15:29 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/13 20:20:20 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;

	newlst = (t_list *)malloc(ft_lstsize(lst));
	newlst = lst;
	while (newlst)
	{
		if (!newlst->content)
			del(newlst->content);
		newlst->content = f(newlst->content);
		newlst = newlst->next;
	}
	free(newlst);
	return (lst);
}
