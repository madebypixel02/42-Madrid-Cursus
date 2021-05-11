/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_other.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 14:01:05 by aperez-b          #+#    #+#             */
/*   Updated: 2021/05/11 10:24:33 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_n(va_list ap, int count)
{
	int	*n;

	n = va_arg(ap, int *);
	*n = count;
	return (0);
}

int	ft_print_f(t_format f, va_list ap)
{
	f.precision = va_arg(ap, int);
	return (f.precision);
}
