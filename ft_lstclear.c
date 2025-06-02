#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    if(!del || !lst)
        return;

    while(*lst != NULL)
    {
        t_list *tmp = *lst -> next;
        (*del)(*lst -> content);
        free (*lst);
        *lst = tmp;
    }
}