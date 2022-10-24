/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:50:48 by rhortens          #+#    #+#             */
/*   Updated: 2022/10/24 18:23:03 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strncmp(const char *str1, const char *str2, int n)        //strncmp compares at most n characters between the two strings str1, str2
{
    while (*str1 != '\0' && *str1 == *str2 && n != 0)
    {
        str1++;
        str2++;
        n--;
    }
    if (n == 0)
        return 0;
    return (*str1 - *str2);                 //returns the ascii difference between *str1 and *str2 at the first difference of the pointers
}
