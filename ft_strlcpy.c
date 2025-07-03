/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meodev <meodev@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:05:05 by meodev            #+#    #+#             */
/*   Updated: 2025/07/02 15:48:15 by meodev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	m;

	m = 0;
	if (size != 0)
	{
		while (m < size -1 && src[m])
		{
			dest[m] = src[m];
			m++;
		}
		dest[m] = '\0';
	}
	m = 0;
	while (src[m])
		m++;
	return (m);
}
