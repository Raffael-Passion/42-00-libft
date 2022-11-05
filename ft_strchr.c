/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:50:36 by rhortens          #+#    #+#             */
/*   Updated: 2022/11/05 12:28:25 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int c)        //locates the first occurence of a char in the string pointed to by s, either returns a pointer to the located character or Null
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return ((char *)str + i);
        else
            i++;
    }
    if (str[i] == c)
    {
        return ((char *)str + i);
    }
    return 0;
}
