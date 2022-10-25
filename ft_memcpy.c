/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:50:24 by rhortens          #+#    #+#             */
/*   Updated: 2022/10/25 16:22:28 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dest, void *src, size_t n)
{
    size_t  i;
    char    *d;
    char    *s;

    i = 0;
    d = (char*)dest;
    s = (char*)src;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}
