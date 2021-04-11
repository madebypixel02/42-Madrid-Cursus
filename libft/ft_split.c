/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 16:59:31 by aperez-b          #+#    #+#             */
/*   Updated: 2021/04/11 13:38:28 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

int	ft_count_words(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_fill_array(char **aux, char const *s, char c)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	temp = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			aux[temp++][j] = '\0';
			aux[temp] = (char *)malloc(ft_chars_till_next_sep(s, c, i) + 1);
			if (aux[temp] == NULL)
				return (NULL);
			j = 0;
		}
		aux[temp][j++] = s[i++];
	}
	aux[ft_count_words(s, c)] = NULL;
	return (aux);
}

char	**ft_split(char const *s, char c)
{
	char	**aux;

	if (!s)
		return (NULL);
	aux = malloc((ft_count_words(s, c) + 8) * 13);
	if (aux == NULL)
		return (NULL);
	aux[0] = (char *)malloc(ft_chars_till_next_sep(s, c, 0) + 1);
	if (aux[0] == NULL)
		return (NULL);
	aux = ft_fill_array(aux, s, c);
	return (aux);
}
