/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgursoy <vgursoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:57:13 by vgursoy           #+#    #+#             */
/*   Updated: 2025/05/29 18:57:13 by vgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	const unsigned char	*s1;
	
	s1 = ptr;
	while (n--)
	{
		if (*s1 == (unsigned char)c)
			return (void *)s1;
		s1++;
	}
	return (NULL);
}
