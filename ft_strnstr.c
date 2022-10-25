/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:50:52 by rhortens          #+#    #+#             */
/*   Updated: 2022/10/25 15:21:28 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (needle == NULL || needle[0] == '\0')
        return ((char *)haystack);
    while (haystack[i] != '\0' && i < n)
    {
        if (haystack[i] == needle[j])
        {
            while (haystack[i + j] == needle[j] && i + j < n)
            {
                if (needle[j + 1] == '\0')
                    return ((char *)haystack + i);
                j++;
            }
            j = 0;
        }
        i++;
    }
    return 0;
}
