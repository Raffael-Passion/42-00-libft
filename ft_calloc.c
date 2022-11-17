/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:49:54 by rhortens          #+#    #+#             */
/*   Updated: 2022/11/17 18:00:26 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	int	*ptr;

	if (n + size > 4294967295 || n * size > 4294967295)
		return (0);
	ptr = (void *)malloc(n * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, n * size);
	return (ptr);
}
