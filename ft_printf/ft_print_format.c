/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 10:26:21 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/21 23:24:27 by aperez-b         ###   ########.fr       */
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

//int	ft_print_p(t_format f, va_list ap);
int	ft_print_d_i(t_format f, va_list ap)
{
	int	nbr;
	int	count;
	int	len;

	count = 0;
	if (f.specfier == 'd' || f.specfier == 'i')
	{
		nbr = va_arg(ap, int);
		len = ft_nbrlen((int)nbr);
		if (nbr < 0)
			f.width--;
		if (f.precision <= 0)
			f.precision = len;
		if (!f.minus && f.width - f.precision > 0)
			count += ft_putnchar_fd(' ', 1, f.width - f.precision);
		if (nbr < 0 && nbr > -2147483648)
		{
			count += ft_putchar_fd('-', 1);
			nbr = -nbr;
		}
		count += ft_putnchar_fd('0', 1, f.precision - len);
		if (nbr)
			count += ft_putnbr_fd(nbr, 1);
		else
			ft_putchar_fd(' ', 1);
		if (f.minus && f.width - f.precision > 0)
			count += ft_putnchar_fd(' ', 1, f.width - f.precision);
	}
	return (count);
}
//int	ft_print_i(t_format f, va_list ap);
//int	ft_print_u(t_format f, va_list ap);
//int	ft_print_x_X(t_format f, va_list ap, int is_lower);

int	ft_print_format(t_format f, va_list ap)
{
	int	count;

	count = 0;
	if (f.width < 0)
	{
		f.width = -f.width;
		f.minus = 1;
	}
	if (f.precision < 0)
		f.precision = -1;
	count += ft_print_c_pct(f, ap);
	count += ft_print_s(f, ap);
	//count += ft_print_p(f, ap);
	count += ft_print_d_i(f, ap);
	//count += ft_print_i(f, ap);
	//count += ft_print_u(f, ap);
	//count += ft_print_x_X(f, ap, 1);
	//count += ft_print_x_X(f, ap, 0);
	return (count);
}
