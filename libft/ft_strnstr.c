#include "libft.h"

char *  ft_strnstr(const char *big,	const char *little, size_t len)
{
    size_t i;

    if(ft_strlen(little) == 0)
        return (char*)big;
    return NULL;
}

#include <stdio.h>
int main()
{
    const char big_strnstr[] = "hoome566";
    const char little_strnstr[] = "";
    printf("TESTING FT_STRNSTR \n\n");
    printf("mine: %s\n", ft_strnstr(big_strnstr, little_strnstr,5));
    printf("original: %s\n", strnstr(big_strnstr, little_strnstr, 4));

}