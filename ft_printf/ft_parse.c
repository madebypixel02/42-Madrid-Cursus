/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 08:42:32 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/21 16:43:44 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_parse(char *str, va_list	ap)
{
	t_format	new_format;

	new_format = ft_newformat();
	if (ft_strchr(str, '-'))
		new_format.minus = 1;
	while (*str && *str != '.')
	{
		if (*str == '*' && !new_format.width)
			new_format.width = va_arg(ap, int);
		if (*str >= '0' && *str <= '9' && !new_format.width)
			new_format.width = ft_atoi(str);
		str++;
	}
	if (*str)
		str++;
	while (*str)
	{
		if (*str == '*' && new_format.precision == -1)
			new_format.precision = va_arg(ap, int);
		else if (new_format.precision == -1)
			new_format.precision = ft_atoi(str);
		str++;
	}
	new_format.specfier = *(str - 1);
	return (ft_print_format(new_format, ap));
}
