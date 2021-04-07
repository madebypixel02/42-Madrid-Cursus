/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:59:31 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/07 16:41:46 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_sep(char const *str, char c)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		if (*str == c)
			count++;
		str++;
	}
	return (count);
}

int	ft_chars_till_next_sep(char const *str, char c, int index)
{
	int	count;

	count = 0;
	while (str[index] != c && str[index] != '\0')
	{
		count++;
		index++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**aux;
	int		i;
	int		j;
	int		temp;

	i = 0;
	j = 0;
	temp = 0;
	if (s == NULL)
		return (NULL);
	aux = (char **)malloc((ft_count_sep(s, c) + 2) * 8);
	aux[temp] = (char *)malloc(ft_chars_till_next_sep(s, c, 0) + 1);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			aux[temp++][j] = '\0';
			aux[temp] = (char *)malloc(ft_chars_till_next_sep(s, c, i++));
			j = 0;
		}
		aux[temp][j++] = s[i++];
	}
	aux[temp + 1] = NULL;
	return (aux);
}
