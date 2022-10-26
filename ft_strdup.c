/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:50:40 by rhortens          #+#    #+#             */
/*   Updated: 2022/10/26 15:51:43 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strdup(const char *s)
{
    int     i;
    int     j;
    char    *str;

    i = 0;
    j = ft_strlen(s);
    str = (char*)malloc(sizeof(*str) * (j + 1));
    while (i < j)
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
