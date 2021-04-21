/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 08:52:18 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/21 14:28:32 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_format	ft_newformat(void)
{
	t_format	newformat;

	newformat.minus = 0;
	newformat.width = 0;
	newformat.precision = -1;
	newformat.specfier = 0;
	return (newformat);
}
