/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgursoy <vgursoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:57:25 by vgursoy           #+#    #+#             */
/*   Updated: 2025/06/23 18:53:50 by vgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*a;
	const char	*b;

	a = (char *)dest;
	b = (const char *)src;
	if (n == 0 || dest == src)
		return (a);
	if (a < b)
		return (ft_memcpy(dest, src, n));
	else if (a > b)
	{
		while (n--)
			a[n] = b[n];
	}
	return (dest);
}
