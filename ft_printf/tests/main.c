/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 09:37:37 by aperez-b          #+#    #+#             */
/*   Updated: 2021/05/07 15:54:19 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"
#include <limits.h>

/* ******** Leaks ******** */
void	check_leaks(int argc, char *uname)
{
		system("valgrind -q -s --leak-check=full --show-leak-kinds=all\
		--track-origins=yes --verbose ./a.out");
		system("leaks a.out && ./a.out");
	ft_printf("Finished checking leaks on %s!\n", uname);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		check_leaks(argc, argv[1]);
	else
	{
		ft_printf("A Len: %d\n", ft_printf("A%d\n", 3));
		printf("B Len: %d\n", printf("B%d\n", 3));
	}
}
