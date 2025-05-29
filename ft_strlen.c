/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgursoy <vgursoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:58:28 by vgursoy           #+#    #+#             */
/*   Updated: 2025/05/29 18:58:28 by vgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//kullanıcıdan aldığım değerleri yanlışlıkla değiştirmemek için const kullandık 
size_t ft_strlen(const char *s)
{
    size_t len = 0; //size_t de negatif bi değer almamak için, unsigned int de çalışır ama profesyoneldeil, biz bellek alanı tutmaya çalışıyoruz sayı değil
    //unsigned long
    while (*s){
        len++;
        s++;
    }
    return len;
}

