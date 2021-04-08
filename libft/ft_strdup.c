/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:47:51 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/07 18:43:32 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int		size;

	size = ft_strlen(s);
	d = (char *)malloc(size + 1);
	if (s != NULL)
	{
		d = (char *)s;
		d[size] = '\0';
		return (d);
	}
	else
		return (NULL);
}
