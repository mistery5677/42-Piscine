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
    printf("depois: %s %ld\n\n", strlcpy_dest, ft_strlcpy(strlcpy_dest,strlcpy_src, 3));

    char dst_strlcat[20] = "hello";
    char *src_strlcat = "world1";

    printf("TESTING FT_STRLCAT \n\n");
    printf("antes: %s\n", dst_strlcat);
    printf("numero: %ld\n", ft_strlcat(dst_strlcat, src_strlcat, 3));
    ft_strlcat(dst_strlcat, src_strlcat, 3);
    printf("depois: %s\n\n", dst_strlcat);

    char c_toupper = 'c';
    printf("TESTING FT_TOUPER \n\n");
    printf("%d\n", ft_toupper(c_toupper));
    printf("%d\n\n", toupper(c_toupper));

    printf("TESTING FT_TOLOWER \n\n");
    printf("%d\n", ft_tolower(c_toupper));
    printf("%d\n\n", tolower(c_toupper));

    const char s_strchr[] = "hello";
    printf("TESTING FT_STRCHR \n\n");
    printf("my: %s\n", ft_strchr(s_strchr, 'o'));
    printf("original: %s\n", strchr(s_strchr, 'o'));

    char str_dup[10] = "hello";
    char str_dup2[10] = "hello";
	char *str_dupp = ft_strdup(str);
    char *str_dupp2 = strdup(str);
    printf("TESTING FT_STRDUP \n\n");
	printf("my: %s\n", str_dupp);
    printf("original: %s\n\n", str_dupp2);
	free(str_dupp);
    free(str_dupp2);

    printf("TESTING FT_STRRCHR \n\n");
    printf("my: %s\n", ft_strrchr(s_strchr, 'h'));
    printf("original: %s\n\n", strrchr(s_strchr, 'h'));

    char s1_strncmp[] = "hello";
    char s2_strncmp[] = "heloo";
    printf("TESTING FT_STRNCMP\n\n");
    printf("my: %d\n", ft_strncmp(s1_strncmp, s2_strncmp, 0));
    printf("original: %d\n\n", strncmp(s1_strncmp, s2_strncmp, 0));

    const char s_memchr[] = "hello";
    printf("TESTING FT_MEMCHR\n\n");
    printf("my: %p\n", ft_memchr(s_memchr, 'e', 1));
    printf("original: %p\n\n", memchr(s_memchr, 'e', 0));  

    char s1_memcmp[] = "hello";
    char s2_memcmp[] = "hello";
    printf("TESTING FT_MEMCMP\n\n");
    printf("my: %d\n", ft_memcmp(s1_memcmp, s2_memcmp, 7));
    printf("original: %d\n\n", memcmp(s1_memcmp, s2_memcmp, 7));
}