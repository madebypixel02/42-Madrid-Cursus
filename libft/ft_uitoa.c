/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:00:03 by aperez-b          #+#    #+#             */
/*   Updated: 2021/05/01 12:03:50 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_allocate(char *str, int len, unsigned int n)
{
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n != 0)
	{
		while (len-- > 0)
		{
			str[len] = (n % 10) + '0';
			n /= 10;
		}
	}
	else
		str[0] = '0';
	return (str);
}

char	*ft_uitoa(unsigned int n)
{
	char			*str;
	int				len;

	len = ft_nbrlen(n, 10);
	str = NULL;
	str = ft_allocate(str, len, n);
	if (str == NULL)
		return (NULL);
	return (str);
}
