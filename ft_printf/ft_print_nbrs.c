/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 09:58:43 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/29 11:34:25 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char	ft_spzero(t_format f)
{
	if (f.zero)
		return ('0');
	return (' ');
}

int	ft_print_d_i(t_format f, va_list ap)
{
	char	*nbr;
	int		count;
	int		len;
	int		sign;

	count = 0;
	nbr = ft_itoa(va_arg(ap, int));
	sign = *nbr == '-';
	len = ft_strlen(nbr);
	/*if ((!f.precision_specified || f.precision < len) && !f.precision_specified) //|| f.precision > len )
		f.precision = len;
	if (f.minus == -1 && f.width > f.precision && f.precision != -1)
		count += ft_putnchar_fd(' ', 1, f.width - f.precision - sign);
    if (sign)
        count += ft_putnchar_fd('-', 1, 1);
    if (f.precision == -1)
      f.precision = f.width;
    if (f.precision > len)
        count += ft_putnchar_fd('0', 1, f.precision - len);
    count +=  write(1, nbr, len);  
    if (f.minus != -1 && abs(f.width) > f.precision)
        count += ft_putnchar_fd(' ', 1, f.width - f.precision - sign);*/
	if (((f.precision < len || f.precision <= 0)\
		&& *nbr != '0') || (*nbr == '0' && !f.precision_specified))
		f.precision = len;
	if (!f.precision_specified)
		f.precision = f.width;
	//&& f.precision < len && *nbr != '0'))
	if (f.zero)
		count += ft_putnchar_fd('-', 1, sign);
	if (!f.minus && f.width - f.precision > 0)
		count += ft_putnchar_fd(ft_spzero(f), 1, f.width - f.precision - sign);
	if (!f.zero)
		count += ft_putnchar_fd('-', 1, sign);
	if (f.precision > len)
		count += ft_putnchar_fd('0', 1, f.precision - len);
	if (*nbr != '0' || (*nbr == '0' && f.precision))
		count += ft_putstr_fd(&nbr[sign], 1);
	if (f.minus && f.width - f.precision > 0)
		count += ft_putnchar_fd(ft_spzero(f), 1, f.width - f.precision - sign);
	free(nbr);
	return (count);
}

/*int	ft_print_u(t_format f, va_list ap)
{
	return (0);
}*/
