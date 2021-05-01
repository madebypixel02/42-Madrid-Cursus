/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 09:24:33 by aperez-b          #+#    #+#             */
/*   Updated: 2021/05/01 11:04:08 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	int		count;
	char	*ptr;
	char	*substr;
	va_list	ap;

	count = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ptr = (char *)str;
			while (!ft_strchr(SPECIFIERS, *str) && *str)
				str++;
			substr = ft_substr(ptr, 0, str - ptr + 1);
			count += ft_parse(substr, ap);
			free(substr);
		}
		else
			count += ft_putchar_fd(*str, 1);
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
		count = ft_print_d_i_u(f, ap);
	if (f.specifier == 'p' || f.specifier == 'X' || f.specifier == 'x')
		count = ft_print_hex(f, ap);
	return (count);
}
