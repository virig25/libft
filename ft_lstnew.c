/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgursoy <vgursoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:57:00 by vgursoy           #+#    #+#             */
/*   Updated: 2025/05/29 18:57:00 by vgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *node;

    node = (t_list *)malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return (node);
}
/*int main(void)
{
    // Test verisi hazırlıyoruz
    char *veri = ft_strdup("Merhaba dunya!");

    // Yeni düğüm oluştur
    t_list *node = ft_lstnew(veri);

    // Kontrol: node oluşmuş mu?
    if (node == NULL)
    {
        printf("Bellek ayrilamadi!\n");
        return (1);
    }

    // İçeriği ekrana yaz
    printf("node->content: %s\n", (char *)node->content);

    // next NULL mu?
    if (node->next == NULL)
        printf("node->next: NULL (dogru!)\n");
    else
        printf("node->next: NOT NULL (bir hata olabilir!)\n");

    // Bellek temizle
    free(node->content); // strdup ile kopyaladığımız string
    free(node);

    return (0);
}*/