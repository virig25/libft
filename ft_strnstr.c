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

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    const char *last = NULL;
    
    while(*s1){
        if(*s1 == *s2)
            last = s1;
        s1++;
    }
    if ((char)s1 == '\0')
        return (char *)s1;
    return (char *)last;

}