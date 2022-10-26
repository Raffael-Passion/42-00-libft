/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:52:03 by rhortens          #+#    #+#             */
/*   Updated: 2022/10/26 19:39:59 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strlcat(char *dst, const char *src, size_t n)     //size bounded string concatenation (src to end of dst)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    while (dst[i] && i < size)
        i++;
    while (src[j] && (i + j + 1) < size)
    {
        dst[i + j] = src[j];
        j++;
    }
    if (i < size)
        dest[i+j] = '\0';
    return (i + ft_strlen(src));
}
