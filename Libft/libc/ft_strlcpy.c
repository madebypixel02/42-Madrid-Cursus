/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:08:56 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/05 17:43:55 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int size_src;

	i = 0;
	size_src = ft_strlen(src);
	while (i < size - 1 && size >= 2)
	{
		if (i <= size_src - 1)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	return (size_src);
}
