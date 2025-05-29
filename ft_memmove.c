/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgursoy <vgursoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:57:25 by vgursoy           #+#    #+#             */
/*   Updated: 2025/05/29 18:57:25 by vgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//bellekte overlap-çakışma riski varsa memmove kullanılır
void *ft_memmove(void *dest, const void *src, size_t n){

    unsigned char *a = (unsigned char *)dest;
    const unsigned char *b = (const unsigned char *)src;

    if (a < b)
       return (ft_memcpy(dest, src, n));  
    else if (a > b)
    {
        while (n--)
            a[n] = b[n];
    }

    return dest;

}