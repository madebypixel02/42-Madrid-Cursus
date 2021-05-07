/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 08:42:32 by aperez-b          #+#    #+#             */
/*   Updated: 2021/05/07 16:06:56 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_format	ft_parse_width(char *c, t_format f, va_list ap)
{
	if (*c == '-')
		f.minus = 1;
	if (*c == '+')
		f.plus = 1;
	if (*c == '0' && !f.zero)
		f.zero = 1;
	if (*c == '*')
		f.width = va_arg(ap, int);
	return (f);
}

t_format	ft_parse_precision(char *c, t_format f, va_list ap)
{
	if ((ft_isdigit(*c) || *c == '*') && !f.precision_specified)
	{
		if (*c == '*')
			f.precision = va_arg(ap, int);
		else
			f.precision = ft_atoi(c);
		f.precision_specified = 1;
	}
	return (f);
}

int	ft_parse(char *c, va_list ap, t_format f)
{
	/*if (*c == '.')
		f.dot = 1;
	if (!f.dot)
		f = ft_parse_width(c, f, ap);
	else if (f.dot)
		f = ft_parse_precision(c, f, ap);*/
	if (ft_strchr(SPECIFIERS, *c))
		f.specifier = *c;
	return (ft_print_format(f, ap));
}
