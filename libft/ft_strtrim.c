/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:59:00 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/12 14:21:48 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;
	int	i;
	int	j;

	if (!s1)
		return (0);
	len = ft_strlen(s1);
	i = 0;
	j = len - 1;
	while (ft_strchr(set, s1[i]) != NULL)
		i++;
	while (ft_strchr(set, s1[j]) != NULL)
		j--;
	if (i >= j)
		len = 0;
	else
		len = j - i;
	return (ft_substr(s1, i, len + 1));
}
