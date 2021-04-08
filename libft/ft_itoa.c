/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:00:03 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/07 17:54:14 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		nb;

	len = ft_nbrlen(n);
	nb = n;
	if (nb < 0)
	{
		str = (char *)malloc(len++ + 1);
		str[0] = '-';
		n = -n;
	}
	else if (nb > 0)
		str = (char *)malloc(len + 1);
	else
		return ("0");
	str[len] = '\0';
	while (len-- >= 0)
	{
		if (len > 0 || nb > 0)
			str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
