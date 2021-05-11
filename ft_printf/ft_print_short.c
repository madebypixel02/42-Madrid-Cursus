/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_short.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 14:01:05 by aperez-b          #+#    #+#             */
/*   Updated: 2021/05/11 17:56:45 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_h_diu(t_format f, va_list ap)
{
	char		*nbr;
	short int	n;
	int			c;
	int			len;
	int			neg;

	c = 0;
	n = va_arg(ap, int);
	neg = (n < 0 && n >= SHRT_MIN && f.specifier != 'u');
	f.plus *= !neg;
	if (n < 0 && f.specifier != 'u')
		n *= -1;
	nbr = ft_uitoa((unsigned short)n);
	len = ft_strlen(nbr);
	if (*nbr == '0' && !f.precision && f.dot)
		len = 0;
	if (f.precision < len || !f.dot)
		f.precision = len;
	c += ft_print_nbr(f, nbr, len, neg);
	free(nbr);
	return (c);
}

int	ft_print_h_hex(t_format f, va_list ap)
{
	int				count;
	unsigned int	n;
	int				len;

	count = 0;
	n = va_arg(ap, unsigned int);
	len = ft_nbrlen(n, 16);
	if (!n && !f.precision && f.dot)
		len = 0;
	if (f.precision < 0 || f.precision < len || !f.dot)
		f.precision = len;
	if (f.sharp && n)
		f.width -= 2;
	count += ft_putstrn_fd(ft_sharp(f), 1, 2 * (f.sharp && f.zero && n));
	if (!f.minus && f.width > f.precision && (!f.dot || f.neg_prec) && f.zero)
		count += ft_putnchar_fd('0', 1, (f.width - f.precision));
	else if (!f.minus && f.width > f.precision)
		count += ft_putnchar_fd(' ', 1, (f.width - f.precision));
	count += ft_putstrn_fd(ft_sharp(f), 1, 2 * (f.sharp && !f.zero && n));
	count += ft_putnchar_fd('0', 1, (f.precision - len));
	if (len)
		count += ft_recursive_hex(f, n, n);
	if (f.minus && f.width > f.precision)
		count += ft_putnchar_fd(' ', 1, f.width - f.precision);
	return (count);
}
