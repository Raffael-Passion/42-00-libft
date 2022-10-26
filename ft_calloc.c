/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:49:54 by rhortens          #+#    #+#             */
/*   Updated: 2022/10/26 16:41:33 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_calloc(size_t n, size_t size)
{
    int     *ptr;
    
    ptr = (void*)malloc(n * size);
    if (!ptr)
        return NULL;
    ft_bzero(ptr, n * size);
    return (ptr);
}
