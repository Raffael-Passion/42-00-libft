/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:50:48 by rhortens          #+#    #+#             */
/*   Updated: 2022/11/05 20:34:30 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	int		dif;

	i = 0;
	while (i < n && (*(str1 + i) || *(str2 + i)))
	{
		dif = *((unsigned char *)str1 + i) - *((unsigned char *)str2 + i);
		if (dif)
			return (dif);
		i++;
	}
	return (0);
}
