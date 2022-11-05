/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:24:25 by rhortens          #+#    #+#             */
/*   Updated: 2022/11/05 20:44:06 by rhortens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_size(int number)
{
	unsigned int	length;

	length = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		length++;
	while (number != 0)
	{
		length++;
		number /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	number;
	unsigned int	length;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	length = ft_size(n);
	number = length - 1;
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n >= 10)
	{
		str[number] = (n % 10) + '0';
		number--;
		n /= 10;
	}
	str[number] = (n % 10) + '0';
	str[length] = '\0';
	return (str);
}
