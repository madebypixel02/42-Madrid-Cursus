/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 09:37:37 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/21 14:31:16 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	main(void)
{
	int		a = -4;
	int		b = 0;
	char	c = 'a';
	int		d = 2147483647;
	int		e = -2147483648;
	int		f = 42;
	int		g = 25;
	int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	char	*n = "abcdefghijklmnop";
	char	*o = "-a";
	char	*p = "-12";
	char	*q = "0";
	char	*r = "%%";
	char	*s = "-2147483648";
	char	*t = "0x12345678";
	char	*u = "-0";

	/*printf("%1s, %1s, %1s, %1s, %1s\n", n, o, p, q, r); //T180
	printf("%2s, %2s, %2s, %2s, %2s\n", n, o, p, q, r); //T181
	printf("%3s, %3s, %3s, %3s, %3s\n", n, o, p, q, r); //T182
	printf("%4s, %4s, %4s, %4s, %4s\n", n, o, p, q, r); //T183
	printf("%15s, %15s, %15s, %15s, %15s\n", n, o, p, q, r); //T184
	printf("%16s, %16s, %16s, %16s, %16s\n", n, o, p, q, r); //T185
	printf("%17s, %17s, %17s, %17s, %17s\n", n, o, p, q, r); //T186
	printf("%.s, %.s, %.s, %.s, %.s\n", n, o, p, q, r); //T186
	printf("%1.s, %1.s, %1.s, %1.s, %1.s\n", n, o, p, q, r); //T186
	printf("%.s, %.s, %.s, %.s, %.s", n, o, p, q, r); //T186
	printf("%1.s, %1.s, %1.s, %1.s, %1.s", n, o, p, q, r); //T186
	printf("%.0s\n", n);
	printf("%-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
	printf("%20.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s", -3, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);*/
	//printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X", i, j, k, l, m, n, c, c, j, j, j)); //T2
	//printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d", i, j, k, l, m, c, e, d); //T3
	/*printf("%1i, %1d, %1d, %1d, %1d, %1d, %1d, %1d", i, j, k, l, m, c, e, d); //T4
	printf("%2i, %2d, %2d, %2d, %2d, %2d, %2d, %2d", i, j, k, l, m, c, e, d); //T5
	printf("%3i, %3d, %3d, %3d, %3d, %3d, %3d, %3d", i, j, k, l, m, c, e, d); //T6
	printf("%4i, %4d, %4d, %4d, %4d, %4d, %4d, %4d", i, j, k, l, m, c, e, d); //T7
	printf("%5i, %5d, %5d, %5d, %5d, %5d, %5d, %5d", i, j, k, l, m, c, e, d); //T8
	printf("%6i, %6d, %6d, %6d, %6d, %6d, %6d, %6d", i, j, k, l, m, c, e, d); //T9
	printf("%7i, %7d, %7d, %7d, %7d, %7d, %7d, %7d", i, j, k, l, m, c, e, d); //T10
	printf("%8i, %8d, %8d, %8d, %8d, %8d, %8d, %8d", i, j, k, l, m, c, e, d); //T11
	printf("%0.i, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d", i, j, k, l, m, c, e, d); //T12
	printf("%.0i, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d", i, j, k, l, m, c, e, d); //T13
	printf("%0.0i, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d", i, j, k, l, m, c, e, d); //T14
	printf("%-0i, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d", i, j, k, l, m, c, e, d); //T15
	printf("%0-i, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d", i, j, k, l, m, c, e, d); //T16
	printf("%-.i, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d", i, j, k, l, m, c, e, d); //T17
	printf("%-.0i, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d", i, j, k, l, m, c, e, d); //T18
	printf("%-i, %-d, %-d, %-d, %-d, %-d, %-d, %-d", i, j, k, l, m, c, e, d); //T19
	printf("%.i, %.d, %.d, %.d, %.d, %.d, %.d, %.d", i, j, k, l, m, c, e, d); //T20
	printf("%-0.0i, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d", i, j, k, l, m, c, e, d); //T21
	printf("%00i, %00d, %00d, %00d, %00d, %00d, %00d, %00d", i, j, k, l, m, c, e, d); //T22
	printf("%1.i, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d", i, j, k, l, m, c, e, d); //T23
	printf("%.1i, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d", i, j, k, l, m, c, e, d); //T24
	printf("%1.1i, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d", i, j, k, l, m, c, e, d); //T25
	printf("%-1i, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d", i, j, k, l, m, c, e, d); //T26
	printf("%-01i, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d", i, j, k, l, m, c, e, d); //T27
	printf("%-1.i, %-1.d, %-1.d, %-1.d, %-1.d, %-1.d, %-1d, %-1d", i, j, k, l, m, c, e, d); //T28
	printf("%-.1i, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d", i, j, k, l, m, c, e, d); //T29
	printf("%-0.1i, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d", i, j, k, l, m, c, e, d); //T30
	printf("%-1.0i, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d", i, j, k, l, m, c, e, d); //T31
	printf("%-1.1i, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d", i, j, k, l, m, c, e, d); //T32
	printf("%1.0i, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d", i, j, k, l, m, c, e, d); //T33
	printf("%*.i, %*d, %*d, %*d, %*d, %*d, %*d, %*d", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);*/
	//printf("%c, %-c, %12c, %-3c, %-1c, %1c, %.*c", 0, 0, 0, 0, 0, 0, 0, '1');
	//printf("%x\n", j);
	/*printf("%0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
	printf("%-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
	printf("%5.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X", -3, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);*/
	/*char *str = "%-42303s\n";
	while (*str)
	{
		if (*str == '%')
			str++;
		printf("%d\n", ft_strchr(SPECIFIERS, *str) != 0);
		str++;
	}*/
	/*printf("%1s, %1s, %1s, %1s, %1s\n", n, o, p, q, r); //T180
	ft_printf("%2s, %2s, %2s, %2s, %2s\n", n, o, p, q, r); //T181
	printf("%3s, %3s, %3s, %3s, %3s\n", n, o, p, q, r); //T182
	printf("%4s, %4s, %4s, %4s, %4s\n", n, o, p, q, r); //T183
	printf("%15s, %15s, %15s, %15s, %15s\n", n, o, p, q, r); //T184
	printf("%16s, %16s, %16s, %16s, %16s\n", n, o, p, q, r); //T185
	printf("%17s, %17s, %17s, %17s, %17s\n", n, o, p, q, r); //T186
	printf("%.s, %.s, %.s, %.s, %.s\n", n, o, p, q, r); //T186
	printf("%1.s, %1.s, %1.s, %1.s, %1.s\n", n, o, p, q, r); //T186
	printf("%.s, %.s, %.s, %.s, %.s", n, o, p, q, r); //T186
	printf("%1.s, %1.s, %1.s, %1.s, %1.s", n, o, p, q, r); //T186
	printf("%.0s\n", n);
	printf("%-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);*/
	printf("%d\n", printf("%-*.1s\n", 9, "string"));

}
