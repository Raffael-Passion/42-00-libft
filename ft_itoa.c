/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:24:25 by rhortens          #+#    #+#             */
/*   Updated: 2022/11/04 14:05:12 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int ft_size(int number)
{
    unsigned int    length;

    length = 0;
    if (number == 0)
        return (1);
    if (number < 0)
        length += 1;
    while (number != 0)
    {
        number /= 10;
        length++;
    }
    return (length);
}

char    *ft_itoa(int n)
{
    char            *str;
    unsigned int    number;
    unsigned int    length;

    length = ft_size(n);
    str = (char *)malloc(sizeof(char) * (length + 1));
    if (str == NULL)
        return NULL;
    if (number < 0)
    {
        str[0] = '-';
        number = -n;
    }
    else
        number = n;
    if (number == 0)
        str[0] = '0';
    str[length] = '\0';
    while (number != 0)
    {
        str[len - 1] = (number % 10) + '0';
        number = number / 10;
        length--;
    }
    return (str);
}
