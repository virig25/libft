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

void *ft_memset(void *s, int c, size_t n){
    //char yapıp küçük sayı verirsek integer promotion
    //int olmasının nedeni overflow olmaması
    //unsigned char yapmamızın sebebi stringi, void ile s[i], *s, s++ yapamamamız. yani içiyle oynayamayız
    //char c yapmamız ise memsetin 1 byte tutabilmesi
    size_t i = 0;
    unsigned char *p = (unsigned char *)s;
    while (i < n){

        p[i] = (unsigned char)c;
        i++;
    }

    return s;
}

int main()
{
    int a[3] = {0, 300, 10000};
    ft_memset(a, 300, 1);
    printf("%i\n",a[0]);
}