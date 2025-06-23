/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgursoy <vgursoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:57:57 by vgursoy           #+#    #+#             */
/*   Updated: 2025/06/23 18:54:54 by vgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dest;

	i = ft_strlen (s);
	dest = malloc (sizeof (char) * (1 + i));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s, 1 + i);
	return (dest);
}
