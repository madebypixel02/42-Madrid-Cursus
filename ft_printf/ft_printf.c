/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 09:24:33 by aperez-b          #+#    #+#             */
/*   Updated: 2021/05/01 09:50:40 by aperez-b         ###   ########.fr       */
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
	
	//count = ft_print_p(f, ap);
	if (f.specifier == 'd' || f.specifier == 'i')
	count = ft_print_d_i(f, ap);
	//count = ft_print_u(f, ap);
	//count = ft_print_hex(f, ap, 1);
	//count = ft_print_hex(f, ap, 0);
	return (count);
}
