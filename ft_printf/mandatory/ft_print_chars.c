/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 10:43:07 by aperez-b          #+#    #+#             */
/*   Updated: 2021/07/08 14:02:00 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

int	ft_print_c_pct(t_format f, va_list ap)
{
	char	c;
	int		count;

	count = 0;
	if (f.specifier == 'c')
		c = va_arg(ap, int);
	else
		c = '%';
	count += ft_putnchar_fd(' ', 1, f.width - 1);
	count += ft_putchar_fd(c, 1);
	return (count);
}

int	ft_print_s(t_format f, va_list ap)
{
	char	*string;
	int		count;
	int		has_malloc;

	count = 0;
	has_malloc = 0;
	string = va_arg(ap, char *);
	if (!string)
	{
		string = malloc(sizeof(char) * 7);
		has_malloc = 1;
		ft_strlcpy(string, "(null)", 7);
	}
	if (f.width - (int)ft_strlen(string) > 0)
		count += ft_putnchar_fd(' ', 1, f.width - (int)ft_strlen(string));
	count += ft_putstrn_fd(string, 1, (int)ft_strlen(string));
	if (has_malloc)
		free(string);
	return (count);
}
