/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 09:58:43 by aperez-b          #+#    #+#             */
/*   Updated: 2021/05/09 19:26:11 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	plus(t_format f)
{
	if (f.plus)
		return ('+');
	return ('-');
}

static int	ft_print_nbr(t_format f, char *nbr, int len, int sign)
{
	int	count;

	count = 0;
	if (*nbr == '0' && !f.precision && f.dot)
		len = 0;
	if (f.precision < 0 || f.precision < len || !f.dot)
		f.precision = len;
	count += ft_putnchar_fd(plus(f), 1, (sign || f.plus) && f.zero && !f.dot);
	if (!f.minus && f.width > f.precision && !f.dot && f.zero)
		count += ft_putnchar_fd('0', 1, f.width - f.precision - sign - f.plus);
	else if (!f.minus && f.width > f.precision)
		count += ft_putnchar_fd(' ', 1, f.width - f.precision - sign - f.plus);
	count += ft_putnchar_fd(plus(f), 1, (sign || f.plus) && (!f.zero || f.dot));
	count += ft_putnchar_fd('0', 1, f.precision - len);
	count += write(1, nbr, len);
	if (f.minus && f.width > f.precision)
		count += ft_putnchar_fd(' ', 1, f.width - f.precision - sign - f.plus);
	return (count);
}

int	ft_print_d_i_u(t_format f, va_list ap)
{
	char	*nbr;
	int		n;
	int		count;
	int		len;
	int		sign;

	count = 0;
	n = va_arg(ap, int);
	sign = (n < 0 && n != INT_MIN && f.specifier != 'u');
	if (sign)
		f.plus = 0;
	if (n < 0 && f.specifier != 'u')
		n *= -1;
	if (n < 0 && f.specifier == 'u')
		nbr = ft_uitoa((unsigned)n);
	else
		nbr = ft_itoa(n);
	len = ft_strlen(nbr);
	count += ft_print_nbr(f, nbr, len, sign);
	free(nbr);
	return (count);
}
