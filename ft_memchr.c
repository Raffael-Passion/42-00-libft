/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:50:15 by rhortens          #+#    #+#             */
/*   Updated: 2022/10/26 17:28:55 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memchr(const void *s, int c, size_t n)
{
    char    *str;
    size_t  i;

    i = 0;
    str = (char *)s;
    while(i < n)
    {
        if ((unsigned char)str[i] == (unsigned char)c)
            return ((char *)s + i);
        i++;
    }
    return (0);
}
