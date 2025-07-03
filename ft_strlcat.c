/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meodev <meodev@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:22:00 by meodev            #+#    #+#             */
/*   Updated: 2025/07/02 15:47:13 by meodev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	m;

	destlen = 0;
	srclen = 0;
	m = 0;
	while (src[srclen])
		srclen++;
	while (dest[destlen] && destlen < size)
		destlen++;
	if (destlen == size)
		return (size + srclen);
	while (src[m] && (destlen + m + 1 < size))
	{
		dest[destlen + m] = src[m];
		m++;
	}
	dest[destlen + m] = '\0';
	return (destlen + srclen);
}
