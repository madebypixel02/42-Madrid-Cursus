/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_float.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 14:01:05 by aperez-b          #+#    #+#             */
/*   Updated: 2021/05/11 11:44:41 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_f_g_e(t_format f, va_list ap)
{
	char		*nbr;
	long		n;
	int		c;
	int		len;
	int		neg;

	c = 0;
	n = va_arg(ap, long int);
	neg = (n < 0 && n != LONG_MIN && f.specifier != 'u');
	if (neg)
		f.plus = 0;
	if (n < 0 && f.specifier != 'u')
		n *= -1;
	if (n < 0 && f.specifier == 'u')
		nbr = ft_uitoa((unsigned long)n);
	else
		nbr = ft_itoa(n);
	len = ft_strlen(nbr);
	if (*nbr == '0' && !f.precision && f.dot)
		len = 0;
	if (f.precision < len || !f.dot)
		f.precision = len;
	c += ft_print_nbr(f, nbr, len, neg);
	free(nbr);
	return (c);
}
