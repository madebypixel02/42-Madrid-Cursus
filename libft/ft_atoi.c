/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:10:37 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/08 09:55:58 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int		nbr;
	char	sign;

	nbr = 0;
	sign = '+';
	while (ft_isspace(*nptr) == 1)
		nptr++;
	if (*nptr == '+' || *nptr == '-')
		nptr++;
	if (*nptr == '-')
		sign = '-';
	while (*nptr >= 48 && *nptr <= 57)
	{
		nbr = (nbr * 10) + *nptr - '0';
		nptr++;
	}
	if (sign == '-')
		nbr = -nbr;
	return (nbr);
}
