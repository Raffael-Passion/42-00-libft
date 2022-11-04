/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:49:47 by rhortens          #+#    #+#             */
/*   Updated: 2022/11/04 20:19:33 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(const char *str)            //atoi shall convert ascii string to integer
{                                           //with const you can not modify the char which is pointed to
    int i;
    int n;
    int res;

    i = 0;
    n = 1;
    res = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))         //check if i is a space or tab
        i++;                                                    //if not, increment
    if (str[i] == '-' || str[i] == '+')                         //check if i is a minus or plus
    {
        if (str[i] == '-')                                      //if minus, you have to n * -1
            n *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = ((str[i] - '0') + (res * 10));                    //define result. - '0' to have the right number displayed
        i++;                                                    //+ result till now times 10 so that the numbers before the curent one are right
    }
    return (res * n);
}
