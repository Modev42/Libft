/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meodev <meodev@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 18:14:08 by meodev            #+#    #+#             */
/*   Updated: 2025/06/28 18:16:26 by meodev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int m)
{
	if (m >= 'a' && m <= 'z')
		return (m - 32);
	return (m);
}
