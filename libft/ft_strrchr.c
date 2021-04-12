/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:09:50 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/12 11:32:26 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*last;
	unsigned char	c_unsigned;

	c_unsigned = (unsigned char)c;
	if (c_unsigned == '\0')
		return ((char *)&s[ft_strlen(s)]);
	last = (char *)s + ft_strlen(s) - 1;
	while (*last != *(char *)s)
	{
		if (*last == c_unsigned)
			return (last);
		last--;
	}
	if (*last == c_unsigned)
		return (last);
	return (NULL);
}
