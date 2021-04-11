/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:10:37 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/11 08:29:23 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long long unsigned	n;
	int					sign;
	long long unsigned	max;

	sign = 1;
	max = 9223372036854775807;
	n = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-')
		sign = -sign;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		if (10 * n + (*nptr - '0') > max && sign == 1)
			return (-1);
		if (10 * n + (*nptr - '0') > max && sign == -1)
			return (0);
		n = 10 * n + (*nptr - '0');
		nptr++;
	}
	return (sign * n);
}
