/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 09:37:37 by aperez-b          #+#    #+#             */
/*   Updated: 2021/05/10 15:08:37 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <limits.h>

/* ******** Leaks ******** */
void	check_leaks(int argc, char *uname)
{
	if (!ft_strncmp(uname, "Linux", 5))
		system("valgrind -q -s --leak-check=full --show-leak-kinds=all\
		--track-origins=yes --verbose ./a.out");
	else
		system("leaks a.out && ./a.out");
	ft_printf("Finished checking leaks on %s!\n", uname);
}

int	main(int argc, char **argv)
{
	int	n;

	if (argc == 2)
		check_leaks(argc, argv[1]);
	else
	{
		//printf("Len: %d\n", ft_printf("A%0*.*i\n", 2, -2, 8));
		printf("Len: %d\n", ft_printf("A%-00000-----*i", -4, 8));
		printf("Len: %d\n", printf("B%-00000-----*i", -4, 8));
	}
}
