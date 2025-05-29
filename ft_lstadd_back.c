/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgursoy <vgursoy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 18:56:27 by vgursoy           #+#    #+#             */
/*   Updated: 2025/05/29 18:56:27 by vgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if(!lst || !new)
        return;
    if (*lst == NULL)
    {
        *lst = new;
        return;
    }

    t_list *tmp = *lst;

    while (tmp->next != NULL)
        tmp = tmp->next;
    
    tmp->next = new;
}
