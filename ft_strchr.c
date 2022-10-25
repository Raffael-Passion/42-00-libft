/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:50:36 by rhortens          #+#    #+#             */
/*   Updated: 2022/10/25 15:17:10 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
