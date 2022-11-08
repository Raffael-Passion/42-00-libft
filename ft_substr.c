/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:25:04 by rhortens          #+#    #+#             */
/*   Updated: 2022/11/08 15:05:19 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (s == NULL)
		return (0);
	i = 0;
	if (ft_strlen(s) < start)
	{
		substr = ft_strdup("");
		return (substr);
	}
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	substr = malloc(sizeof(char) * len + 1);
	if (!substr)
		return (0);
	while (i < len)
	{
		substr[i] = s[start];
		i++;
		s++;
	}
	substr[i] = '\0';
	return (substr);
}
