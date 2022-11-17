/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:50:23 by rhortens          #+#    #+#             */
/*   Updated: 2022/11/17 18:00:26 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**mallocerror(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}

static int	wordscntr(const char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*str)
	{
		if (*str != c && j == 0)
		{
			j = 1;
			i++;
		}
		else if (*str == c)
			j = 0;
		str++;
	}
	return (i);
}

static char	*duplicate(const char *str, int *start, char c)
{
	char	*dup;
	int		i;
	size_t	len;

	len = 0;
	while (str[*start] == c)
		(*start)++;
	i = *start;
	while (str[i] && str[i] != c)
	{
		len++;
		i++;
	}
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (0);
	i = 0;
	while (str[*start] && str[*start] != c)
		dup[i++] = str[(*start)++];
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(const char *s, char c)
{
	int		index;
	int		i;
	char	**split;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (wordscntr(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	index = 0;
	while (i < wordscntr(s, c))
	{
		split[i] = duplicate(s, &index, c);
		if (!split[i])
			return (mallocerror(split));
		i++;
	}
	split[i] = 0;
	return (split);
}