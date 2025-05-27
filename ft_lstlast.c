#include "libft.h"

t_list *ft_lstlast(t_list *lst){

    if (!lst)
        return 0;
    while (lst -> next != NULL)
    {
        lst = lst -> next;
    }
    return lst;
}

/*int main()
{

    char *veri = ft_strdup("Merhaba dunya!");
    t_list *root;
    root = malloc(sizeof(t_list));
    root -> content = NULL;
    root -> next = malloc (sizeof(t_list));
    root -> next -> content = NULL;
    root -> next -> next = malloc (sizeof(t_list));
    root -> next -> next -> content = veri;
    root -> next -> next -> next = NULL;

    printf("%s", (char *)ft_lstlast(root)->content);


} */