/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:09:13 by rhortens          #+#    #+#             */
/*   Updated: 2022/10/24 18:23:03 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int *size)
{
    unsigned int i;
    unsigned int counter;

    i = 0;
    counter = 0;

    while (src[counter] != '\0')
    {
        counter++;
    }
    if size != 0
    {
        while (src[i] != '\0' && size - 1 > i)
        {
            dest[i] = src[i];
            i++;
        }
        dest [i] + '\0';
    }
    return (counter);
}
