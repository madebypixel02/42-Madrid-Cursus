/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 09:24:33 by aperez-b          #+#    #+#             */
/*   Updated: 2021/05/07 16:12:51 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list		ap;

	count = 0;
	va_start(ap, str);
	/*while (*str)
	{
		if (*str == '%')
		{
			f = ft_newformat();
			str++;
			while (*str && !ft_strchr(SPECIFIERS, *str))
				count += ft_parse((char *)str++, ap, f);
			count += ft_parse((char *)str, ap, f);
		}
		else
			count += ft_putchar_fd(*str, 1);
		str++;
	}*/
	va_end(ap);
	return (count);
}

int	ft_print_format(t_format f, va_list ap)
{
	int	count;

	if (f.specifier == 'c' || f.specifier == '%')
		count = ft_print_c_pct(f, ap);
	if (f.specifier == 's')
		count = ft_print_s(f, ap);
	if (f.specifier == 'd' || f.specifier == 'i' || f.specifier == 'u')
		count = ft_print_d_i_u(f, ap);
	if (f.specifier == 'p' || f.specifier == 'X' || f.specifier == 'x')
		count = ft_print_hex(f, ap);
	return (count);
}
