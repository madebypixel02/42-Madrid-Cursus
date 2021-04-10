/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:59:00 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/10 21:04:35 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_trim(char const *s1, int len, int start, int end)
{
	char	*trimmed;
	int		i;
	int		j;

	i = 0;
	j = 0;
	trimmed = (char *)malloc(len + 1);
	if (!trimmed)
		return (0);
	while (s1[i] != '\0')
	{
		if (i >= start && i <= end)
			trimmed[j++] = s1[i];
		i++;
	}
	trimmed[len] = '\0';
	return (trimmed);
}

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
		return ("");
	return (ft_trim(s1, len, start, end));
}
