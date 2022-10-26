/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:50:57 by rhortens          #+#    #+#             */
/*   Updated: 2022/10/26 19:40:46 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int c)        //locates the last occurence of a char in the string pointed to by s, either returns a pointer to the located character or Null
{
    int i;

    i = ft_strlen(str);
    if (c == '\0')
        return ((char *)str + i);
    while (i >= 0)
    {
        if (str[i] == c)
            return ((char *)str + i);
        i--;
    }
    return 0;
}
