#include "libft.h"

typedef struct s_list
{
    char *name;
    unsigned int age;
    struct s_list *next;
} t_list;

int main()
{
    t_list *head = malloc(sizeof(t_list));
    char *nome = "Miguel";
    unsigned int idade = "22";

    head->name = nome;
    head->age = idade;

    t_list *node1 = malloc(sizeof(t_list));
    char *nome2 = "Margarida";
    unsigned int idade2 = "52";

    node1->name = nome2;
    node1->age = idade2;
    head->next = node1;

    printf("nome: %s\n", head->name);
    printf("idade: %s\n", head->age);
    printf("nome: %s\n", node1->name);
    printf("idade: %s\n", node1->age);
}