/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgursoy <vgursoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:58:33 by vgursoy           #+#    #+#             */
/*   Updated: 2025/05/29 18:58:33 by vgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i = 0;
    char *dest; 
    dest = malloc((ft_strlen(s) + 1) * sizeof(char));
    if (!dest)
        return NULL;
    while (s[i])
    {
        dest[i] = (*f)(i, s[i]);
        i++;
    }
    dest[i] = '\0';
    return dest;

}