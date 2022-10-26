/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:50:29 by rhortens          #+#    #+#             */
/*   Updated: 2022/10/26 18:35:55 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;

    if (dest > src)
    {
        i = n;
        while (i > 0)
        {
            i--;
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        }
    }
    else
    {
        i = 0;
        while (i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    return (dest);
}
