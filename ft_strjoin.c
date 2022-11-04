/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:24:46 by rhortens          #+#    #+#             */
/*   Updated: 2022/11/04 21:00:34 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(const char *s1, const char *s2)
{
    char    *str;
    size_t  n1;
    size_t  n2;

    if (!(s1) && !(s2))
        return NULL;
    else if (!(s1) || !(s2))
        return (!(s1) ? ft_strdup(s2) : ft_strdup(s1));      //(test) ? (when-true) : (when-false)
    n1 = ft_strlen(s1);
    n2 = ft_strlen(s2);
    if (!(str = (char *)malloc(sizeof(char) * (n1 + n2 + 1))))
        return NULL;
    ft_strlcpy(str, s1, n1 + 1);
    ft_strlcat(str, s2, n1 + n2 + 1);
        return (str);
}
