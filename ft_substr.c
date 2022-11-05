/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:25:04 by rhortens          #+#    #+#             */
/*   Updated: 2022/11/05 22:29:20 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (s == NULL || ft_strlen(s) < start)
		return (ft_strdup(""));
	if (start + len < ft_strlen(s))
		substr = (char *)malloc((len + 1) * sizeof(char));
	else
		substr = (char *)malloc((ft_strlen(s) - start + 1) * sizeof(char));
	if (!substr)
		return (0);
	i = start;
	while (i < (start + len) && *(s + i))
	{
		*substr++ = *(s + i);
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
