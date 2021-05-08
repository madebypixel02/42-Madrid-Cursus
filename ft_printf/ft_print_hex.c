/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 10:26:21 by aperez-b          #+#    #+#             */
/*   Updated: 2021/05/08 12:57:25 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_recursive_hex(t_format f, size_t n, size_t iteration)
{
	int		count;
	int		remainder;
	char	character;

	count = 0;
	if (n > 0 || (!iteration && (f.specifier != 'p' || !f.dot)))
	{
		remainder = n % 16;
		if (f.specifier != 'X')
			character = HEXALOW[remainder];
		else
			character = HEXAUP[remainder];
		n /= 16;
		iteration = 1;
		count += ft_recursive_hex(f, n, iteration);
		count += ft_putchar_fd(character, 1);
	}
	return (count);
}

int	ft_print_hex(t_format f, va_list ap)
{
	int				count;
	unsigned int	n;
	int				len;

	count = 0;
	n = va_arg(ap, unsigned int);
	len = ft_nbrlen(n, 16);
	if (!n && f.precision <= 0 && f.dot) 
		len = 0; 
	if (f.precision < 0 || f.precision < len || !f.dot)
		f.precision = len;
	if (!f.minus && f.width > f.precision && !f.dot && f.zero)
		count += ft_putnchar_fd('0', 1, (f.width - f.precision));
	else if (!f.minus && f.width > f.precision)
		count += ft_putnchar_fd(' ', 1, (f.width - f.precision));
	count += ft_putnchar_fd('0', 1, (f.precision - len));
	if (len)
		count += ft_recursive_hex(f, n, n);
	if (f.minus && f.width > f.precision)
		count += ft_putnchar_fd(' ', 1, f.width - f.precision);
	return (count);
}

int	ft_print_p(t_format f, va_list ap)
{
	int				count;
	size_t	n;
	int				len;

	count = 0;
	n = va_arg(ap, size_t);
	len = ft_nbrlen(n, 16);
	if (!n && f.precision <= 0 && f.dot) 
		len = 0; 
	if (f.precision < 0 || f.precision < len || !f.dot)
		f.precision = len;
	count += write(1, "0x", 2 * f.zero);
	f.width -= 2;
	if (!f.minus && f.width > f.precision && !f.dot && f.zero)
		count += ft_putnchar_fd('0', 1, (f.width - f.precision));
	else if (!f.minus && f.width > f.precision)
		count += ft_putnchar_fd(' ', 1, (f.width - f.precision));
	count += write(1, "0x", 2 * !f.zero);
	if (n)
		count += ft_putnchar_fd('0', 1, (f.precision - len));
	else if (f.dot)
		count += ft_putnchar_fd('0', 1, (f.precision));
	if (len)
		count += ft_recursive_hex(f, n, n);
	if (f.minus && f.width > f.precision)
		count += ft_putnchar_fd(' ', 1, f.width - f.precision);
	return (count);
}
