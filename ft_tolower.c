/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:51:01 by rhortens          #+#    #+#             */
/*   Updated: 2022/10/26 19:40:55 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_tolower(int i)           //converts uppercase letter to lowercase letter
{
    if (i >= 'A' && i <= 'Z')
        return (i + 32);
    return (i);
}
