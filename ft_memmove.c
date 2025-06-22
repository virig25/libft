/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgursoy <vgursoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:57:25 by vgursoy           #+#    #+#             */
/*   Updated: 2025/05/29 18:57:25 by vgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//bellekte overlap-çakışma riski varsa memmove kullanılır
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*a;
	const char	*b;

	*a = (char *)dst;
	*b = (const char *)src;
	if (len == 0 || dst == src)
		return (a);
	if (a < b)
	   return (ft_memcpy(dst, src, len));  
	else if (a > b)
	{
		while (len--)
			a[len] = b[len];
	}
	return dst;
}
