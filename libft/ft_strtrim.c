/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:59:00 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/11 13:32:43 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		i;
	int		start;
	int		end;

	if (!s1)
		return (0);
	i = 0;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) != NULL)
		i++;
	start = i;
	i = len - 1;
	while (ft_strchr(set, s1[i]) != NULL)
		i--;
	end = i;
	len = end - start + 1;
	if (start >= end)
		len = 0;
	return (ft_totrim(s1, len, start, end));
}
