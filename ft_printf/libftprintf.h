/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 09:11:41 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/20 20:07:50 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H

# define LIBFTPRINTF_H

# define FLAGS		"-0.*"
# define SPECIFIERS	"cspdiuxX%"

# define HEXALOW	"0123456789abcdef"
# define HEXAUPP	"0123456789ABCDEF"

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_countargs(char *str);

#endif
