/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 09:24:33 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/20 20:08:16 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	int		count;
	char	*ptr;
	va_list	ap;

	count = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ptr = (char *)str;
			while (!ft_strchr(SPECIFIERS, *str) && *str)
				str++;
			printf("q->%s\n", ft_substr(ptr, 0, str - ptr + 1));
		}
		else
			ft_putchar_fd(*(str++), 1);
		str++;
	}
	va_end(ap);
	return (count);
}
