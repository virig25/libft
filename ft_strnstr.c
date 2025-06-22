/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgursoy <vgursoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 19:00:37 by vgursoy           #+#    #+#             */
/*   Updated: 2025/05/29 19:00:37 by vgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	last;
	size_t	i;

	last = 0;
	if (needle[last] == '\0')
		return ((char *)haystack);
	while (haystack[last] != '\0' && last < len)
	{
		i = 0;
		while (haystack[last + i] == needle[i] && last + i < len)
		{
			i++;
			if (needle[i] == '\0')
				return ((char *)haystack + last);
		}
		last++;
	}
	return (NULL);
}
