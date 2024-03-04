#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
        size_t i;

        i = 0;
        while(((const char *)s)[i] && i < n)
        {
                if(((const char *)s)[i] == c)
                        return (void *)(s + i);
                i++;
        }
        return NULL;
}
