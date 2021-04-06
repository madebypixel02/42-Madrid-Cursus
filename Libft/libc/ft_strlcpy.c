/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:08:56 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/06 17:19:17 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	size_t			size_src;

	i = 0;
	size_src = ft_strlen(src);
	while (i < size - 1 && size >= 2)
	{
		if (i <= size_src - 1)
			dst[i] = src[i];
		else
			dst[i] = '\0';
		i++;
	}
	if (size != 0)
		dst[i] = '\0';
	return (size_src);
}
