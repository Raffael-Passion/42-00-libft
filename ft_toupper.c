/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:51:04 by rhortens          #+#    #+#             */
/*   Updated: 2022/10/26 19:41:04 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_toupper(int i)           //converts lowercase letter to uppercase letter
{
    if (i >= 'a' && i <= 'z')
        return (i - 32);
    return (i);
}
