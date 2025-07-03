/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meodev <meodev@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 14:34:15 by meodev            #+#    #+#             */
/*   Updated: 2025/07/02 15:38:08 by meodev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *a, int b, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)a;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)b)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
