/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:06:19 by rhortens          #+#    #+#             */
/*   Updated: 2022/11/05 12:55:13 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(const char *s1, const char *set)
{
    char    *str;
    size_t  n;
    size_t  m;
    
    if (!(s1) || !(set))
        return NULL;
    n = 0;
    while (s1[n] != '\0' && ft_strchr(set, s1[n]))
        n++;
    m = ft_strlen(s1 + n);
    while (ft_strchr(set, s1[n + m]))
        m--;
    if (!(str = ft_substr(s1, n, m + 1)))
        return NULL;
    return (str);
}
