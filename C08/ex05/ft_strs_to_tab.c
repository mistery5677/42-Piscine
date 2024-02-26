#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int ft_strlen(char *av)
{
    int i = 0;

    while(av[i])
        i++;
    return i;
}

char *str_copy(char *av, int len)
{
    int i;
    char *copy;

    i = 0;
    copy = malloc((len + 1) * sizeof(char));
    while(av[i])
    {
        copy[i] = av[i];
        i++;
    }
    copy[i] = '\0';
    return copy;
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int i;
    t_stock_str *arr;

    i = 0;
    arr = malloc((ac + 1) * sizeof(t_stock_str));
    if(arr == NULL)
        return NULL;
    while(i < ac)
    {
        arr[i].size = ft_strlen(av[i]);
        arr[i].str = av[i];
        arr[i].copy = str_copy(av[i], arr[i].size);
        i++;
    }
    arr[i].size = 0;
    arr[i].str = 0;
    arr[i].copy = 0; 
    
    return arr;
}