/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 09:24:33 by aperez-b          #+#    #+#             */
/*   Updated: 2021/05/11 13:19:29 by aperez-b         ###   ########.fr       */
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

	if (f.specifier == 'c' || f.specifier == '%')
			count = ft_print_c_pct(f, ap);
	if (f.specifier == 's')
			count = ft_print_s(f, ap);
	if (f.specifier == 'd' || f.specifier == 'i' || f.specifier == 'u')
	{
			if (f.l_count || f.h_count)
					count = ft_print_bonus(f, ap);
			else
					count = ft_print_d_i_u(f, ap);
	}
	if (f.specifier == 'X' || f.specifier == 'x')
			count = ft_print_x_X(f, ap);
	if (f.specifier == 'p')
			count = ft_print_p(f, ap);
	if (f.specifier == 'f')
		count = ft_print_f(f, ap);
	return (count);
}

int	ft_print_bonus(t_format f, va_list ap)
{
	int	count;

	count = 0;
	if (f.h_count == 1 && !f.l_count)
			count = ft_print_h(f, ap);
	else if (f.h_count == 2 && !f.l_count)
			count = ft_print_hh(f, ap);
	if (f.l_count == 2)
			count = ft_print_ll(f, ap);
	if (f.l_count == 1)
			count = ft_print_l(f, ap);
	return (count);
}
