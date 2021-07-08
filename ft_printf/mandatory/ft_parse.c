/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 08:42:32 by aperez-b          #+#    #+#             */
/*   Updated: 2021/07/08 14:01:15 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

static t_format	ft_parse_width(char *str, t_format f)
{
	int	specified;

	specified = 0;
	while (!ft_strchr(SPECIFIERS, *str))
	{
		if ((*str > '0' && *str <= '9') && !specified)
		{
			f.width = ft_atoi(str);
			specified = 1;
		}
		str++;
	}	
	return (f);
}

int	ft_parse(char *str, va_list	ap)
{
	t_format	new_format;

	new_format = ft_parse_width(str, ft_newformat());
	while (!ft_strchr(SPECIFIERS, *str))
		str++;
	if (new_format.width < 0)
		new_format.width *= -1;
	new_format.specifier = *str;
	return (ft_print_format(new_format, ap));
}
