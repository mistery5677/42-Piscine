#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
    char c = '\0';
    char str[10] = "hello";

    printf("TESTING FT_ISALPHA \n\n");
    printf("my: %d\n", ft_isalpha(c));
    printf("original: %d\n\n", isalpha(c));

    printf("TESTING FT_ISDIGIT \n\n");
    printf("my: %d\n", ft_isdigit(c));
    printf("original: %d\n\n", isdigit(c));
    
    printf("TESTING FT_ISALNUM \n\n");
    printf("my: %d\n", ft_isalnum(c));
    printf("original: %d\n\n", isalnum(c));

    printf("TESTING FT_ISASCII \n\n");
    printf("my: %d\n", ft_isascii(c));
    printf("original: %d\n\n", isascii(c));

    printf("TESTING FT_ISPRINT \n\n");
    printf("my: %d\n", ft_isprint(c));
    printf("original: %d\n\n", isprint(c));

    printf("TESTING FT_STRLEN \n\n");
    printf("my: %lu\n", ft_strlen(str));
    printf("original: %lu\n\n", strlen(str));
}