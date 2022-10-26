/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:50:36 by rhortens          #+#    #+#             */
/*   Updated: 2022/10/26 19:39:42 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int c)        //locates the first occurence of a char in the string pointed to by s, either returns a pointer to the located character or Null
{
    while (*str != '\0')
    {
        if (*str == c)
            return (char *) str;
        str++;
    }
    return 0;
}
