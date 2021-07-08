/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 10:26:21 by aperez-b          #+#    #+#             */
/*   Updated: 2021/07/08 14:02:35 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

static int	ft_recursive_hex(t_format f, size_t n, size_t iteration)
{
	int		count;
	int		remainder;
	char	character;

	count = 0;
	if (n > 0 || (!iteration && f.specifier != 'p'))
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

int	ft_print_x_X(t_format f, va_list ap)
{
	int				count;
	unsigned int	n;
	int				len;

	count = 0;
	n = va_arg(ap, unsigned int);
	len = ft_nbrlen(n, 16);
	if (f.width > len)
		count += ft_putnchar_fd(' ', 1, f.width - len);
	if (len)
		count += ft_recursive_hex(f, n, n);
	return (count);
}

int	ft_print_p(t_format f, va_list ap)
{
	int		count;
	size_t	n;
	int		len;

	count = 0;
	n = va_arg(ap, size_t);
	len = ft_nbrlen(n, 16);
	f.width -= 2;
	if (f.width > len)
		count += ft_putnchar_fd(' ', 1, f.width - len);
	count += write(1, "0x", 2);
	if (len)
		count += ft_recursive_hex(f, n, n);
	return (count);
}
