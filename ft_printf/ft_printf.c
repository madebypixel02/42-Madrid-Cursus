/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 09:24:33 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/19 20:22:30 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str)
{
	int		count;
	char	*ptr;
	char	specifiers[9];

	ft_strlcpy(specifiers, "cspdiuxX", 9);
	count = 0;
	while (*str)
	{
		if (*str == '%' && *(str + 1) != '%')
		{
			str++;
			ptr = (char *)str;
			while (!ft_strchr(specifiers, *str) && *str)
				str++;
			printf("q->%s\n", ft_substr(ptr, 0, str - ptr + 1));
		}
		else
			ft_putchar_fd(*(str++), 1);
		str++;
	}
	return (count);
}
