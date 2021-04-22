/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 09:58:43 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/22 20:01:43 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_nbr(t_format f, char *nbr, int len)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (nbr[0] != '0' || (nbr[0] == '0' && f.precision != 0))
	{
		while (nbr[i])
		{
			if (i == 0 && nbr[i] != '-')
				count += ft_putnchar_fd('0', 1, f.width - len);
			else if (nbr[i - 1] == '-')
				count += ft_putnchar_fd('0', 1, f.width - len);
			count += ft_putchar_fd(nbr[i], 1);
			i++;
		}
	}
	else if (f.width)
		count += ft_putchar_fd(' ', 1);
	return (count);
}

int	ft_print_d_i(t_format f, va_list ap)
{
	char	*nbr;
	int		count;
	int		len;

	count = 0;
	if (f.specfier == 'd' || f.specfier == 'i')
	{
		nbr = ft_itoa(va_arg(ap, int));
		len = ft_strlen(nbr);
		if (f.precision <= 0)
			f.precision = 1;
		if (!f.minus && f.width - f.precision > 0)
			count += ft_putnchar_fd(' ', 1, f.width - f.precision);
		count += ft_print_nbr(f, nbr, len);
		if (f.minus && f.width - f.precision > 0)
			count += ft_putnchar_fd(' ', 1, f.width - f.precision);
		free(nbr);
	}
	return (count);
}

/*int	ft_print_u(t_format f, va_list ap)
{
	return (0);
}*/
