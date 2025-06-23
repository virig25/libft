/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgursoy <vgursoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 19:00:37 by vgursoy           #+#    #+#             */
/*   Updated: 2025/06/23 17:29:33 by vgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	last;
	size_t	i;

	last = 0;
	if (little[last] == '\0')
		return ((char *)big);
	while (big[last] != '\0' && last < len)
	{
		i = 0;
		while (big[last + i] == little[i] && last + i < len)
		{
			i++;
			if (little[i] == '\0')
				return ((char *)big + last);
		}
		last++;
	}
	return (NULL);
}
