/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgursoy <vgursoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:57:22 by vgursoy           #+#    #+#             */
/*   Updated: 2025/05/29 18:57:22 by vgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n){

    size_t i = 0;
    unsigned char *a = (unsigned char *)dest;
    const unsigned char *b = (const unsigned char *)src;
    while (i < n){

        a[i] = b[i];
        i++;
    }

    return dest;
}
