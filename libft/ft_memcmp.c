#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
        size_t i;

        i = 0;
        if(n == 0)
                return 0;
        while(i < n)
        {
                if(((const char*) s1)[i] != ((const char*) s2)[i])
                        return ((const char *)s1)[i] - ((const char*) s2)[i];
                i++;
        }
        return ((char *)s1)[i] - ((char*) s2)[i];
}
