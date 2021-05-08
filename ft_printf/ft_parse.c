/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 08:42:32 by aperez-b          #+#    #+#             */
/*   Updated: 2021/05/08 13:05:38 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_format	ft_parse_width(char *str, va_list	ap, t_format f)
{
	while (*str != '.' && !ft_strchr(SPECIFIERS, *str))
	{
		if (*str == '-')
			f.minus = 1;
		if (*str == '+')
			f.plus = 1;
		if (*str == '0' && !ft_isdigit(*(str - 1)))
			f.zero = 1;
		else if ((ft_isdigit(*str) || *str == '*') && !f.width_specified)
		{
			if (*str == '*')
				f.width = va_arg(ap, int);
			else
				f.width = ft_atoi(str);
			f.width_specified = 1;
		}
		str++;
	}
	if (f.width < 0)
	{
		f.minus = 1;
		f.width *= -1;
	}
	return (f);
}

t_format	ft_parse_precision(char *str, va_list ap, t_format f)
{
	while (!ft_strchr(SPECIFIERS, *str))
	{
		if ((ft_isdigit(*str) || *str == '*') && !f.precision_specified)
		{
			if (*str == '*')
				f.precision = va_arg(ap, int);
			else
				f.precision = ft_atoi(str);
			f.precision_specified = 1;
		}
		str++;
	}
	return (f);
}

int	ft_parse(char *str, va_list	ap)
{
	t_format	new_format;

	new_format = ft_parse_width(str, ap, ft_newformat());
	while (!ft_strchr(SPECIFIERS, *str) && *str != '.')
		str++;
	if (*str == '.' && !new_format.specifier)
	{
		new_format.dot = 1;
		new_format = ft_parse_precision(str++, ap, new_format);
		while (!ft_strchr(SPECIFIERS, *str))
			str++;
	}
	new_format.specifier = *str;
	if (new_format.specifier)
		return (ft_print_format(new_format, ap));
	return (0);
}
