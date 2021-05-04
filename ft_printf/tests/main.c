/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 09:37:37 by aperez-b          #+#    #+#             */
/*   Updated: 2021/05/04 11:41:32 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <limits.h>

/* ******** Leaks ******** */
void	check_leaks(int argc, char *uname)
{
	if (!ft_strncmp(uname, "Linux", 1))
		system("valgrind -q --leak-check=full ./a.out");
	else
		system("leaks a.out && ./a.out");
	ft_printf("Checked leaks in %s!\n", uname);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		check_leaks(argc, argv[1]);
	ft_printf("A%*.5s %*.5s$\n", -10, "123", -10, "4567");
	printf("B%*.5s %*.5s$\n", -10, "123", -10, "4567");
}
