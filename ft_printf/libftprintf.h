/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 09:11:41 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/28 09:13:38 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H

# define LIBFTPRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

typedef struct s_format
{
	int		minus;
	int		plus;
	int		width;
	int		width_specified;
	int		precision;
	int		precision_specified;
	char	specfier;
}					t_format;

# define FLAGS		"-0.*"
# define SPECIFIERS	"cspdiuxX%"

# define HEXALOW	"0123456789abcdef"
# define HEXAUPP	"0123456789ABCDEF"

int			ft_printf(const char *str, ...);
t_format	ft_newformat(void);
int			ft_print_format(t_format f, va_list ap);
int			ft_print_c_pct(t_format f, va_list ap);
int			ft_print_s(t_format f, va_list ap);
int			ft_print_p(t_format f, va_list ap);
int			ft_print_d_i(t_format f, va_list ap);
int			ft_print_u(t_format f, va_list ap);
int			ft_print_nbr(t_format f, char *nbr, int len);
int			ft_print_hex(t_format f, va_list ap, int is_lower);
int			ft_parse(char *str, va_list	ap);

#endif
