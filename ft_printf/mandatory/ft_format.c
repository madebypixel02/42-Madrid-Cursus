/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 08:52:18 by aperez-b          #+#    #+#             */
/*   Updated: 2021/07/08 13:35:07 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/ft_printf.h"

t_format	ft_newformat(void)
{
	t_format	newformat;

	newformat.width = 0;
	newformat.specifier = 0;
	return (newformat);
}
