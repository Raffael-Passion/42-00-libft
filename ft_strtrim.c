/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:06:19 by rhortens          #+#    #+#             */
/*   Updated: 2022/11/15 20:37:50 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	if_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*new;
	size_t	f;
	size_t	l;
	size_t	i;

	f = 0;
	l = ft_strlen(s1);
	while (s1[f] && if_set(s1[f], set))
		f++;
	while (l > f && if_set(s1[l - 1], set))
		l--;
	new = malloc(sizeof(char) * (l - f + 1));
	if (!new)
		return (0);
	i = 0;
	while (f < l)
	{
		new[i] = s1[f];
		i++;
		f++;
	}
	new[i] = '\0';
	return (new);
}
