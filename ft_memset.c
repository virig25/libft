/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgursoy <vgursoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:57:29 by vgursoy           #+#    #+#             */
/*   Updated: 2025/05/29 18:57:29 by vgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	//char yapıp küçük sayı verirsek integer promotion
	//int olmasının nedeni overflow olmaması
	//unsigned char yapmamızın sebebi stringi, void ile s[i], *s, s++ yapamamamız. yani içiyle oynayamayız
	//char c yapmamız ise memsetin 1 byte tutabilmesi
	size_t			i;
	unsigned char	*p;

	i = 0;
	*p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return s;
}
