/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:41:11 by rhortens          #+#    #+#             */
/*   Updated: 2022/11/04 14:05:09 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *str;

    i = 0;
    str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
    if (str == NULL)
        return NULL;
    while (s[i] != '\0')
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
