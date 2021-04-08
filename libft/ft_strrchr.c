/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:09:50 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/08 14:14:37 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	last = (char *)s + ft_strlen(s) - 1;
	while (*last != *(char *)s)
	{
		if (*last == c)
			return (last);
		last--;
	}
	if (*last == c)
		return (last);
	return (NULL);
}
