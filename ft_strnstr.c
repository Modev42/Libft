/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meodev <meodev@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 13:49:32 by meodev            #+#    #+#             */
/*   Updated: 2025/06/29 13:57:30 by meodev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *text, const char *word, size_t max)
{
	size_t	a;
	size_t	b;

	if (*word == '\0')
		return ((char *)text);
	a = 0;
	while (text[a] && a < max)
	{
		b = 0;
		while (word[b] && text[a + b] == word[b] && (a + b) < max)
			b++;
		if (word[b] == '\0')
			return ((char *)&text[a]);
		a++;
	}
	return (NULL);
}
