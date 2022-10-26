/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:09:13 by rhortens          #+#    #+#             */
/*   Updated: 2022/10/26 19:40:08 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int *size)
{
    unsigned int i;
    unsigned int counter;

    i = 0;
    counter = 0;

    while (src[counter] != '\0')
    {
        counter++;
    }
    if size != 0
    {
        while (src[i] != '\0' && size - 1 > i)
        {
            dest[i] = src[i];
            i++;
        }
        dest [i] + '\0';
    }
    return (counter);
}
