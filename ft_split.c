/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:50:23 by rhortens          #+#    #+#             */
/*   Updated: 2022/11/04 21:02:52 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  wordscntr(const char *str, char c)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (*str)
    {
        if (*str != c && j == 0)
        {
            j = 1;
            i++;
        }
        else if (*str == c)
            j = 0;
        str++;
    }
    return (i);
}

static char *duplicate(const char *str, int start, int end)
{
    char    *dup;
    int     i;

    i = 0;
    dup = malloc(sizeof(char) * (end - start + 1));
    while (start < end)
    {
        dup[i] = str[start];
        i++;
        start++;
    }
    dup[i] = '\0';
    return (dup);
}

char    **ft_split(const char *s, char c)
{
    int     index;    
    size_t  i;
    size_t  j;
    char    **split;

    if (!s || !(split = malloc(sizeof(char *) * (wordscntr(s, c) + 1))))
        return NULL;
    i = 0;
    j = 0;
    index = -1;
    while (i <= ft_strlen(s))
    {
        if (s[i] != c && index < 0)
            index = i;
        else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
        {
            split[j++] = duplicate(s, index, i);
            index = -1;
        }
        i++;
    }
    split[j] = 0;
    return (split);
}
