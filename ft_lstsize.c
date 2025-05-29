/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgursoy <vgursoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:57:09 by vgursoy           #+#    #+#             */
/*   Updated: 2025/05/29 18:57:09 by vgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    size_t len = 0;
    while (lst != NULL)
    {
        lst = lst -> next;
        len++;
    }
    return len;
}
/*int main()
{
    t_list *root;
    root = malloc(sizeof(t_list));
    root -> content = NULL;
    root -> next = malloc(sizeof(t_list));
    root -> next -> content = NULL;
    root -> next -> next = malloc(sizeof(t_list));
    root -> next -> next -> content = NULL;
    root -> next -> next -> next = NULL;

    printf("%d", ft_lstsize(root));

    free(root->next->next);
    free(root->next);
    free(root);


}*/