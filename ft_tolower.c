/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:51:01 by rhortens          #+#    #+#             */
/*   Updated: 2022/10/25 12:23:03 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_tolower(int i)           //converts uppercase letter to lowercase letter
{
    if (i >= 'A' && i <= 'Z')
        return (i + 32);
    return (i);
}
