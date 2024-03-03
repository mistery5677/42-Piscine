#include "libft.h"

void *ft_memmove(void *str1, const void *str2, size_t n)
{
    int i;

    while(i < n)
    {
        ((char *)str1)[i] = ((char *)str2)[i];
        i++;
    }
    return str1;
}

int main()
{
    char str1[10] = "hello";
    char str2[10] = "world";

    printf("before: str1 %s str2 %s\n", str1, str2);
    ft_memmove(str1, str2, 4);
    printf("after: str1 %s str2 %s\n", str1, str2);
}