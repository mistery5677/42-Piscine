#include "libft.h"

void *ft_memmove(void *str1, const void *str2, size_t n)
{
    size_t i;
    
    i = 0;
    while(i < n)
    {
        ((char *)str1)[i] = ((char *)str2)[i];
        i++;
    }
    return str1;
}