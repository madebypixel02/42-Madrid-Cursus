/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 10:26:21 by aperez-b          #+#    #+#             */
/*   Updated: 2021/05/01 14:20:52 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_recursive_hex(t_format f, size_t n, size_t n_bak)
{
	int		count;
	int		remainder;
	char	character;

	count = 0;
	if (n > 0 || !n_bak)
	{
		remainder = n % 16;
		if (f.specifier != 'X')
			character = HEXALOW[remainder];
		else
			character = HEXAUP[remainder];
		n /= 16;
		n_bak = 1;
		count += ft_recursive_hex(f, n, n_bak);
		count += ft_putchar_fd(character, 1);
	}
	return (count);
}

int	ft_print_hex(t_format f, va_list ap)
{
	int		count;
	size_t	n;
	int		len;

	count = 0;
	n = va_arg(ap, size_t);
	len = ft_nbrlen(n, 16);
	if (n == 0 && f.precision <= 0 && f.precision_specified)
		len = 0;
	if (f.specifier == 'p' && n)
		len += 2;
	if (f.precision < 0 || f.precision < len || !f.precision_specified)
		f.precision = len;
	count += write(1, "0x", 2 * (f.specifier == 'p' && f.zero && n));
	if (!f.minus && f.width > f.precision && !f.precision_specified && f.zero)
		count += ft_putnchar_fd('0', 1, (f.width - f.precision) * (n != 0));
	else if (!f.minus && f.width > f.precision)
		count += ft_putnchar_fd(' ', 1, (f.width - f.precision) * (n != 0));
	count += write(1, "0x", 2 * (f.specifier == 'p' && !f.zero && n));
	count += ft_putnchar_fd('0', 1, (f.precision - len) * (n != 0));
	count += ft_recursive_hex(f, n, n);
	if (f.minus && f.width > f.precision)
		count += ft_putnchar_fd(' ', 1, f.width - f.precision);
	return (count);
}
