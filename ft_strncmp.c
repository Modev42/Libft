/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meodev <meodev@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 17:16:17 by meodev            #+#    #+#             */
/*   Updated: 2025/07/02 15:48:42 by meodev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t m)
{
	if (m == 0)
		return (0);
	while (*s1 && (*s1 == *s2) && (m > 1))
	{
		s1++;
		s2++;
		m--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
