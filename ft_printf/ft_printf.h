/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 09:11:41 by aperez-b          #+#    #+#             */
/*   Updated: 2021/05/11 13:01:56 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

typedef struct s_format
{
	int		minus;
	int		plus;
	int		width;
	int		precision;
	int		neg_prec;
	char	specifier;
	int		zero;
	int		dot;
	int		space;
	int		sharp;
	int		l_count;
	int		h_count;
}			t_format;

# define LONG_MIN -9223372036854775808
# define INT_MIN -2147483648
# define SHRT_MIN -32768
# define SSHRT_MIN -128

# define SPECIFIERS	"cspdiuxXnfe%"

# define HEXALOW	"0123456789abcdef"
# define HEXAUP		"0123456789ABCDEF"

int			ft_printf(const char *str, ...);
t_format	ft_newformat(void);
int			ft_print_format(t_format f, va_list ap);
int			ft_print_c_pct(t_format f, va_list ap);
int			ft_print_s(t_format f, va_list ap);
int			ft_print_d_i_u(t_format f, va_list ap);
int			ft_print_nbr(t_format f, char *nbr, int len, int neg);
int			ft_print_x_X(t_format f, va_list ap);
int			ft_print_p(t_format f, va_list ap);
int			ft_print_n(va_list ap, int count);
int			ft_print_f(t_format f, va_list ap);
int			ft_parse(char *str, va_list	ap, int count);
int			ft_print_l(t_format f, va_list ap);
int			ft_print_ll(t_format f, va_list ap);
int			ft_print_h(t_format f, va_list ap);
int			ft_print_hh(t_format f, va_list ap);

#endif
