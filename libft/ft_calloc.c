#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *str;

    if(nmemb == 0 || size == 0)
        return NULL;
    str = malloc(nmemb * sizeof(size));
    if(str == NULL)
        return NULL;
    ft_bzero(str, size * nmemb);
    return str;
}
