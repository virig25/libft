/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgursoy <vgursoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:57:22 by vgursoy           #+#    #+#             */
/*   Updated: 2025/06/23 18:54:17 by vgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*a;
	const unsigned char	*b;

	i = 0;
	a = (unsigned char *)dest;
	b = (const unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (0);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dest);
}
