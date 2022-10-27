/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:25:04 by rhortens          #+#    #+#             */
/*   Updated: 2022/10/27 14:34:11 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t  n;

    if (!s)
        return NULL;
    if (ft_strlen(s) < start)
        return (ft_strdup(""));
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    if (!(substr = malloc(len + 1)))
        return NULL;
    n = 0;
    while (n < len)
    {
        substr[n] = s[start + n];
        n++;
    }
    substr[n] == '\0';
    return (substr);
}
