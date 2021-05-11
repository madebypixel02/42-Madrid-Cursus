/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 09:24:33 by aperez-b          #+#    #+#             */
/*   Updated: 2021/05/11 18:17:03 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int			count;
	va_list		ap;

	count = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			if (*(++str))
				count += ft_parse((char *)str, ap, count);
			while (*str && !ft_strchr(SPECIFIERS, *str))
				str++;
		}
		else
			count += ft_putchar_fd(*str, 1);
		if (*str)
			str++;
	}
	va_end(ap);
	return (count);
}

int	ft_print_format(t_format f, va_list ap)
{
	int	count;

	if (!f.l_count && !f.h_count)
	{
		if (f.specifier == 'c' || f.specifier == '%')
				count = ft_print_c_pct(f, ap);
		if (f.specifier == 's')
				count = ft_print_s(f, ap);
		if (f.specifier == 'd' || f.specifier == 'i' || f.specifier == 'u')
				count = ft_print_d_i_u(f, ap);
		if (f.specifier == 'X' || f.specifier == 'x')
				count = ft_print_x_X(f, ap);
		if (f.specifier == 'p')
				count = ft_print_p(f, ap);
		if (f.specifier == 'f')
				count = ft_print_f(f, ap);
	}
	else
		count = ft_print_bonus(f, ap);
	return (count);
}

int	ft_print_bonus(t_format f, va_list ap)
{
	int	count;

	count = 0;
	if (f.h_count && !f.l_count)
	{
		if (f.specifier == 'd' || f.specifier == 'i' || f.specifier == 'u')
			count = ft_print_h_diu(f, ap);
		else if (f.specifier == 'x' || f.specifier == 'X')
			count = ft_print_h_hex(f, ap);
	}
	else if(f.l_count)
	{
		if (f.specifier == 'd' || f.specifier == 'i' || f.specifier == 'u')
			count = ft_print_l_diu(f, ap);
		else if (f.specifier == 'x' || f.specifier == 'X')
			count = ft_print_l_hex(f, ap);
	}
	return (count);
}
