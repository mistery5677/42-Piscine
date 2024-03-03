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

    char teste[10];
    char teste2[10];
    size_t len = 10;
    ft_memset(teste, 'I', len);

    printf("TESTING FT_MEMSET \n\n");
    printf("my: %s\n", teste);
    ft_memset(teste2, 'I', len);
    printf("original: %s\n\n", teste2);

    char str2[10] = "Hello";
    printf("TESTING FT_BZERO \n\n");
    printf("Before zeroing: %s\n", str2);
    ft_bzero(str2, 3);
    printf("After zeroing: %s\n\n", str2);

    char *src = "hello";
    char dest[3];
    printf("TESTING FT_MEMCPY \n\n");
    printf("Before memcpy: %s\n", dest);
    ft_memcpy(dest, src, 3);
    printf("After memcpy: %s\n\n", dest);

    char dest_memmove[10] = "hello";
    char src_memmove[10] = "world";

    printf("TESTING FT_MEMMOVE \n\n");
    printf("before: str1 %s str2 %s\n", dest_memmove, src_memmove);
    ft_memmove(dest_memmove, src_memmove, 4);
    printf("after: str1 %s str2 %s\n\n", dest_memmove, src_memmove);

    char strlcpy_dest[5] = "hello";
    char strlcpy_src[5] = "world";

    printf("TESTING FT_STRLCPY \n\n");
    printf("antes: %s\n", strlcpy_dest);
    ft_strlcpy(strlcpy_dest, strlcpy_src, 3);
    printf("depois: %s %d\n\n", strlcpy_dest, ft_strlcpy(strlcpy_dest,strlcpy_src, 3));

}