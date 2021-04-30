/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 09:37:37 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/30 13:38:46 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"
#include <limits.h>

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
	int		i = -82;
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

	//ft_printf("%*s, %1s, %1s, %1s, %1s\n", 1, n, o, p, q, r); //T180
	/*ft_printf("%2s, %2s, %2s, %2s, %2s\n", n, o, p, q, r); //T181
	ft_printf("%3s, %3s, %3s, %3s, %3s\n", n, o, p, q, r); //T182
	ft_printf("%4s, %4s, %4s, %4s, %4s\n", n, o, p, q, r); //T183
	ft_printf("%15s, %15s, %15s, %15s, %15s\n", n, o, p, q, r); //T184
	ft_printf("%16s, %16s, %16s, %16s, %16s\n", n, o, p, q, r); //T185
	ft_printf("%17s, %17s, %17s, %17s, %17s\n", n, o, p, q, r); //T186
	ft_printf("%.s, %.s, %.s, %.s, %.s\n", n, o, p, q, r); //T186
	ft_printf("%1.s, %1.s, %1.s, %1.s, %1.s\n", n, o, p, q, r); //T186
	ft_printf("%.s, %.s, %.s, %.s, %.s", n, o, p, q, r); //T186
	ft_printf("%1.s, %1.s, %1.s, %1.s, %1.s", n, o, p, q, r); //T186
	ft_printf("%.0s\n", n);
	ft_printf("%-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
	ft_printf("%20.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s", -3, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);*/
	//ft_printf("%i, %d, %d, %d, %d, %s, %c, %d, %d\n", i, j, k, l, m, n, c, c, j); //T2
	//ft_printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d\n", i, j, k, l, m, c, e, d); //T3
	//ft_printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d\n", i, j, k, l, m, c, e, d); //T3
	//ft_printf("%1i, %1d, %1d, %1d, %1d, %1d, %1d, %1d\n", i, j, k, l, m, c, e, d); //T4
	//ft_printf("%2i, %2d, %2d, %2d, %2d, %2d, %2d, %2d\n", i, j, k, l, m, c, e, d); //T5
	//ft_printf("%3i, %3d, %3d, %3d, %3d, %3d, %3d, %3d\n", i, j, k, l, m, c, e, d); //T6
	//ft_printf("%4i, %4d, %4d, %4d, %4d, %4d, %4d, %4d\n", i, j, k, l, m, c, e, d); //T7
	//ft_printf("%*.*i, %5d, %5d, %5d, %5d, %5d, %5d, %5d\n", 2, -3, 2, j, k, l, m, c, e, d); //T8
	//ft_printf("%*.*i, %5d, %5d, %5d, %5d, %5d, %5d, %5d\n", 2, -3, 2, j, k, l, m, c, e, d); //T8
	//ft_printf("%6i, %6d, %6d, %6d, %6d, %6d, %6d, %6d\n", i, j, k, l, m, c, e, d); //T9
	//ft_printf("%7i, %7d, %7d, %7d, %7d, %7d, %7d, %7d\n", i, j, k, l, m, c, e, d); //T10
	//ft_printf("%8i, %8d, %8d, %8d, %8d, %8d, %8d, %8d\n", i, j, k, l, m, c, e, d); //T11
	//ft_printf("%0.i, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d\n", i, j, k, l, m, c, e, d); //T12
	//ft_printf("%0.i, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d\n", i, j, k, l, m, c, e, d); //T12
	//ft_printf("%.0i, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d\n", i, j, k, l, m, c, e, d); //T13
	//ft_printf("%0.0i, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d\n", i, j, k, l, m, c, e, d); //T14
	//ft_printf("%-5i, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d\n", i, j, k, l, m, c, e, d); //T15
	//ft_printf("%-5i, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d\n", i, j, k, l, m, c, e, d); //T15
	//ft_printf("%0-i, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d\n", i, j, k, l, m, c, e, d); //T16
	//ft_printf("%0-i, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d\n", i, j, k, l, m, c, e, d); //T16
	//ft_printf("%-.i, %-.d, %-.d, %-.*d, %-.d, %-.d, %-.d, %-.d\n", i, j, k, 0, l, m, c, e, d); //T17
	//ft_printf("%-.0i, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d\n", i, j, k, l, m, c, e, d); //T18
	//ft_printf("%-.i, %-d, %-d, %-.3d, %-d, %-d, %-d, %-d\n", i, j, k, l, m, c, e, d); //T19
	//ft_printf("%.i, %.d, %.d, %.d, %.d, %.d, %.d, %.d\n", i, j, k, l, m, c, e, d); //T20
	//ft_printf("%-0.0i, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %13.0d, %-0.0d\n", i, j, k, l, m, c, e, d); //T21
	//ft_printf("%00.3i, %00.4d, %00d, %00d, %00.20d, %00d, %00.13d, %00d\n", i, j, k, l, m, c, e, d); //T22
	//ft_printf("%1.i, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d\n", i, j, k, l, m, c, e, d); //T23
	//ft_printf("%.1i, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d\n", i, j, k, l, m, c, e, d); //T24
	//ft_printf("%1.1i, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d\n", i, j, k, l, m, c, e, d); //T25
	//ft_printf("%-1i, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d\n", i, j, k, l, m, c, e, d); //T26
	//ft_printf("%-01i, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d\n", i, j, k, l, m, c, e, d); //T27
	//ft_printf("%-1.i, %-1.d, %-1.d, %-1.d, %-1.d, %-1.d, %-1d, %-1d\n", i, j, k, l, m, c, e, d); //T28
	//ft_printf("%-.1i, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d\n", i, j, k, l, m, c, e, d); //T29
	//ft_printf("%-0.1i, %-0.1d, %-0.1d, %-0.0d, %-0.1d, %-0.1d, %-0.1d, %-0.1d\n", i, j, k, l, m, c, e, d); //T30
	//ft_printf("%-0.1i, %-0.1d, %-0.1d, %-0.0d, %-0.1d, %-0.1d, %-0.1d, %-0.1d\n", i, j, k, l, m, c, e, d); //T30
	//ft_printf("%-1.0i, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d\n", i, j, k, l, m, c, e, d); //T31
	//ft_printf("%-1.1i, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-20.16d, %-1.1d, %-1.1d\n", i, j, k, l, m, c, e, d); //T32
	//ft_printf("Len: %d\n", printf("%1.0i, %5.10d, %1.12d, %1.0d, %1.0d, %1.0d, %1.30d, %1.0d\n", i, j, k, l, m, c, e, d)); //T33
	//ft_printf("%*.i, %*d\n", a, i, a, l);
	//ft_printf("%c, %-c, %12c, %-3c, %-1c, %1c, %.*c", 'a', 'a', 'a', 'a', 'a', 'a', 0, '1');
	//ft_printf("%x\n", j);
	/*printf("%0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
	printf("%-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
	printf("%5.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X", -3, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);*/
	/*char *str = "%-42303s\n";
	//ft_printf("%d\n", ft_printf("%s\n", "string"));
	//ft_printf("%s", ft_itoa(-2147483648));
	//ft_printf("%.d\n", 123);*/
	//ft_printf("%-*.*d,%*.*d\n", 6, 2, 102, 10, 21, -101);
	//ft_printf("%d\n", 0);
	//ft_printf("%0*d\n", 21, -1011);
	//ft_printf("%-*.*d\n", 6, 2, 102);	
	
	
	
	// -------------- printfTester -----------------
	//ft_printf("%d\n", 0);
	//ft_printf("%.d\n", 0);
        //ft_printf("%-.2d\n", 0);
        //ft_printf("%-2.2d\n", 0);
        //ft_printf("%-3.2d\n", 0);
        //ft_printf("%-3.2d %10.42d\n", 0, 0);
        //printf("%-3.2d %10.42d\n", 0, 0);
        //printf("%-3.2d %10.42d\n", 0, 0);
        //ft_printf("%-3.2d %10.42d\n", 0, 0);
	//printf("%-3.2d %1.4d\n", 1, -1);
	//ft_printf("%-3.2d %1.4d\n", 1, -1);
	//printf("%-3.2d %10.42d\n", 1, -1);
	//ft_printf("%-3.2d %10.42d\n", 1, -1);
        //ft_printf("%-3.2d %10.42d\n", 10, -10);
        //printf("%-3.2d %10.42d\n", 10, -10);
        //printf("%-*.*d *%*.*d\n", 4, 5, 10, 10, 21, -10);
        //ft_printf("%-*.*d *%*.*d\n", 4, 5, 10, 10, 21, -10);
        //printf("%-*.*d *%*.*d\n", 6, 2, 102, 10, 21, -101);
        //ft_printf("%-*.*d *%*.*d\n", 6, 2, 102, 10, 21, -101);
        //printf("%*.*d *%*.*d\n", -6, 2, 102, 10, 21, 101);
        //ft_printf("%*.*d *%*.*d\n", -6, 2, 102, 10, 21, 101);
        //printf("%0-*.*d %0*.*d\n", 6, 2, 102, 10, 21, -101);
        //ft_printf("%0-*.*d %0*.*d\n", 6, 2, 102, 10, 21, -101);
        //ft_printf("A%0*.*d\n", 7, 5, -101);
        //printf("B%0*.*d\n", 7, 5, -101);
        //ft_printf("A%0*.*d\n", 21, 19, -101);
        //printf("B%0*.*d\n", 21, 19, -101);
        //ft_printf("%0*d\n", 6, -1011);
        //printf("%0*d\n", 6, -1011);
        //ft_printf("A%-0*.0d\n", 21, -1011);
        //printf("B%-0*.0d\n", 21, -1011);
        //ft_printf("A%-0*.0d\n", 21, -1011);
        //printf("B%-0*.0d\n", 21, -1011);
        //ft_printf("%0*.0d\n", -2, 0);
        //printf("%0*.0d\n", -2, 0);
        //ft_printf("A%0*.10d--\n", 21, INT_MIN);
        //printf("B%0*.10d--\n", 21, INT_MIN);
        //ft_printf("A%0*.0d\n", -21, LONG_MAX, 21);
        //printf("B%0*.0d\n", -21, LONG_MAX);
        //ft_printf("%-0*.20d %-0*.10d--\n", -21, CHAR_MAX, 21, CHAR_MIN);
        //printf("%-0*.20d %-0*.10d--\n", -21, CHAR_MAX, 21, CHAR_MIN);
        //ft_printf("A%-0*.2d--\n", 21, CHAR_MIN);
        //printf("B%-0*.2d--\n", 21, CHAR_MIN);
        //ft_printf("A%-0*.3d--\n", 21, CHAR_MIN);
        //printf("B%-0*.3d--\n", 21, CHAR_MIN);
        //ft_printf("A%-0*.4d--\n", 21, CHAR_MIN);
        //printf("B%-0*.4d--\n", 21, CHAR_MIN);
        //ft_printf("A%9.2d\n", UINT_MAX);
        //printf("B%9.2d\n", UINT_MAX);
        //ft_printf("%9.10d\n", UINT_MAX);
        //printf("%9.10d\n", UINT_MAX);
        //ft_printf("%10.0d\n", UINT_MAX);
        //printf("%10.0d\n", UINT_MAX);
        //ft_printf("%10.1d\n", UINT_MAX);
        //printf("%10.1d\n", UINT_MAX);
        //ft_printf("A%10.2d\n", UINT_MAX);
        //printf("B%10.2d\n", UINT_MAX);
        //ft_printf("%10.10d\n", UINT_MAX);
        //printf("%10.10d\n", UINT_MAX);
        //ft_printf("%11.0d\n", UINT_MAX);
        //printf("%11.0d\n", UINT_MAX);
        //ft_printf("%11.1d\n", UINT_MAX);
        //printf("%11.1d\n", UINT_MAX);
        //ft_printf("A%11.2d\n", UINT_MAX);
        //printf("B%11.2d\n", UINT_MAX);
        //ft_printf("A%11.10d\n", UINT_MAX);
        //printf("B%11.10d\n", UINT_MAX);
        //ft_printf("A%-9.0d\n", UINT_MAX);
        //printf("B%-9.0d\n", UINT_MAX);
        //ft_printf("A%-9.1d\n", UINT_MAX);
        //printf("B%-9.1d\n", UINT_MAX);
        //ft_printf("A%-9.2d\n", UINT_MAX);
        //printf("B%-9.2d\n", UINT_MAX);
        //ft_printf("%-9.10d\n", UINT_MAX);
        //printf("%-9.10d\n", UINT_MAX);
 
}
