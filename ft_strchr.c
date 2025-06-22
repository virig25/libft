/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgursoy <vgursoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:57:54 by vgursoy           #+#    #+#             */
/*   Updated: 2025/05/29 18:57:54 by vgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strchr(const char *s, int c)
{
 	int	a;

	a = ft_strlen(s);
	while (a >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		a--;
		s++;
	}
	return (NULL);
}
