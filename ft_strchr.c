/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meodev <meodev@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 19:20:42 by meodev            #+#    #+#             */
/*   Updated: 2025/07/03 16:29:33 by meodev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int m)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) m)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)m == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
