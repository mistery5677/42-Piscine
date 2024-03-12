#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;

    temp = *lst;
    if(lst)
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
            ft_lstdelone(temp, del);
        }
    }

}

/*int main()
{
    t_list *head;

    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

    node1->content = "Node 1";
    node2->content = "Node 2";
    node3->content = "Node 3";

    node3->next = node2;
    node2->next = node1;
    node1->next = NULL;

    printf("before free: %s\n", (char *)node2->content);
    ft_lstdelone(node2, &delete_lst);
    printf("content free");
    free(node1);
    free(node3);
}*/
