/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 09:37:37 by aperez-b          #+#    #+#             */
/*   Updated: 2021/05/04 10:47:10 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <limits.h>


int	main(int argc, char **argv)
{
	ft_printf("A%*.5s %*.5s\n", -10, "123", -10, "4567");
	printf("B%*.5s %*.5s\n", -10, "123", -10, "4567");

	/* ******** Leaks ******** */
	char	*uname;

	uname = (char *)popen("uname -s", "r");
	if (ft_strncmp(uname, "Linux", 5) && !*argv)
	{
		uname = NULL;
		system("valgrind -q --leak-check=full ./a.out 1");
	}
	else if (!*argv)
		system("leaks a.out && ./a.out");
}
