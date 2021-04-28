/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 09:58:43 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/28 10:42:52 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*int	ft_print_nbr(t_format f, char *nbr, int len)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	
	return (count);
}*/

int	ft_print_d_i(t_format f, va_list ap)
{
	char	*nbr;
	int		count;
	int		len;

	count = 0;
	if (f.specfier == 'd' || f.specfier == 'i')
	{
		nbr = ft_itoa(va_arg(ap, int));
		len = ft_strlen(nbr);
		if (!f.precision_specified || f.precision < 0)
			f.precision = len;
		if (!f.minus && f.width - f.precision > 0)
			count += ft_putnchar_fd(' ', 1, f.width - f.precision);
		count += ft_putnchar_fd('-', 1, nbr[0] == '-');
		count += ft_putnchar_fd('0', 1, f.precision - ft_strlen(nbr));
		if (nbr[0] != '0' || (nbr[0] == '0' && f.precision))
			count += ft_putstr_fd(&nbr[nbr[0] == '-'], 1);
		if (f.minus && f.width - f.precision > 0)
			count += ft_putnchar_fd(' ', 1, f.width - f.precision);
		free(nbr);
	}
	//printf("%d", f.precision_specified);
	return (count);
}

/*int	ft_print_u(t_format f, va_list ap)
{
	return (0);
}*/
