/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 09:58:43 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/30 14:33:55 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
/*static char	ft_spzero(t_format f)
{
	if (f.zero)
		return ('0');
	return (' ');
}*/

int	ft_print_d_i(t_format f, va_list ap)
{
	char	*nbr;
	int		count;
	int		len;
	int		sign;

	count = 0;
	nbr = ft_itoa(va_arg(ap, int));
	sign = *nbr == '-';
	len = ft_strlen(nbr);
	if (*nbr == '0' && f.precision <= 0 && f.precision_specified)
	{
		*nbr = '\0';
		len = 0;
	}
	if ((f.precision <= 0 || f.precision < len))
		f.precision = len;
	count += ft_putnchar_fd('-', 1, (sign && f.zero && f.precision > f.width));
	if (!f.minus && f.width > f.precision && !f.precision_specified && f.zero)
		count += ft_putnchar_fd('0', 1, f.width - f.precision);
	else if (!f.minus && f.width > f.precision)
		count += ft_putnchar_fd(' ', 1, f.width - f.precision - sign);
	count += ft_putnchar_fd('-', 1, ((sign && !f.zero) || f.precision < f.width));
	if (f.precision > len)
		count += ft_putnchar_fd('0', 1, f.precision - len + sign);
	count +=  ft_putstr_fd(&nbr[sign], 1);
	if (f.minus && f.width > f.precision)
		count += ft_putnchar_fd(' ', 1, f.width - f.precision - (sign && !f.zero));
	free(nbr);
	return (count);
}

/*int	ft_print_u(t_format f, va_list ap)
{
	return (0);
}*/
