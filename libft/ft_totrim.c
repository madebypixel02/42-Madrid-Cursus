/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_totrim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 10:24:21 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/11 13:32:56 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_totrim(char const *s1, int len, int start, int end)
{
	int		i;
	int		j;
	char	*trimmed;

	i = 0;
	j = 0;
	trimmed = (char *)malloc(len + 1);
	if (trimmed == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (i >= start && i <= end)
			trimmed[j++] = s1[i];
		i++;
	}
	trimmed[len] = '\0';
	return (trimmed);
}
