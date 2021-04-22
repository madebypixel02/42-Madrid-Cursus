/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 10:43:07 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/22 17:08:29 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_c_pct(t_format f, va_list ap)
{
	char	c;
	int		count;

	count = 0;
	if (f.specfier == 'c' || f.specfier == '%')
	{
		if (f.specfier == 'c')
			c = va_arg(ap, int);
		else
			c = '%';
		f.precision = 1;
		if (!f.minus && f.width - f.precision > 0)
			count += ft_putnchar_fd(' ', 1, f.width - f.precision);
		count += ft_putchar_fd(c, 1);
		if (f.minus && f.width - f.precision > 0)
			count += ft_putnchar_fd(' ', 1, f.width - f.precision);
		return (count);
	}
	return (0);
}

int	ft_print_s(t_format f, va_list ap)
{
	char	*string;
	int		count;
	int		len;

	count = 0;
	if (f.specfier == 's')
	{
		string = va_arg(ap, char *);
		len = ft_strlen(string);
		if (f.precision == -1)
			f.precision = len;
		if (!f.minus && f.width - f.precision > 0)
			count += ft_putnchar_fd(' ', 1, f.width - f.precision);
		count += ft_putstrn_fd(string, 1, f.precision);
		if (f.minus && f.width - f.precision > 0)
			count += ft_putnchar_fd(' ', 1, f.width - f.precision);
		return (count);
	}
	return (0);
}
