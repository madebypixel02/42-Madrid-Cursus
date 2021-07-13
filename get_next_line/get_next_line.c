/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 10:59:17 by aperez-b          #+#    #+#             */
/*   Updated: 2021/07/13 11:15:36 by aperez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	char	*temp;
	char 	**line[4096];

	temp = malloc(BUFFER_SIZE + 1);
	if (!temp)
		return (NULL);
	temp[read(fd, temp, BUFFER_SIZE)] = '\0';
	line[fd] = ft_split(temp, '\n');
	free(temp);
	return (*line[fd]);
}

char	**ft_split(char const *s, char c)
{
	char	**aux;
	int		nwords;

	if (!s)
		return (NULL);
	nwords = ft_count_words(s, c);
	aux = malloc(sizeof(char *));
	if (aux == NULL)
		return (NULL);
	aux = ft_split_gnl(aux, s, c);
	return (aux);
}
