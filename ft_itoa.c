/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meodev <meodev@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 12:31:44 by meodev            #+#    #+#             */
/*   Updated: 2025/07/02 15:59:09 by meodev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int m)
{
	char	*str;
	long	num;
	int		len;

	num = m;
	len = ft_numlen(num);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (m < 0)
		str[0] = '-';
	return (str);
}
