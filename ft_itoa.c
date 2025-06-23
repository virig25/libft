/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgursoy <vgursoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:56:23 by vgursoy           #+#    #+#             */
/*   Updated: 2025/06/23 17:09:28 by vgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit(long a)
{
	int	i;

	i = 1;
	if (a < 0)
	{
		a = -a;
		i++;
	}
	while (a > 9)
	{
		a = a / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	num;
	size_t	len;
	char	*dest;

	num = n;
	if (n == 0)
		return (ft_strdup("0"));
	len = ft_digit(num);
	dest = malloc(sizeof (char) * (len + 1));
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	if (num < 0)
	{
		num = -num;
		dest[0] = '-';
	}
	while (num > 0)
	{
		dest[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (dest);
}
