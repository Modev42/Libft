/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meodev <meodev@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 13:01:43 by meodev            #+#    #+#             */
/*   Updated: 2025/07/03 16:23:02 by meodev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s, const char *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	if (!s || !set)
		return (NULL);
	start = 0;
	while (s[start] && ft_is_in_set(s[start], set))
		start++;
	end = ft_strlen(s);
	while (end > start && ft_is_in_set(s[end - 1], set))
		end --;
	trimmed = (char *)malloc(sizeof(char) * (end - start +1));
	if (!trimmed)
		return (NULL);
	ft_memcpy(trimmed, s + start, end - start);
	trimmed[end - start] = '\0';
	return (trimmed);
}
