#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main()
{
    char teste = '+';
    printf("TESTING FT_ISALPHA \n\n");
    printf("my: %d\n", ft_isalpha(teste));
    printf("original: %d\n\n", isalpha(teste));

    printf("TESTING FT_ISDIGIT \n\n");
    printf("my: %d\n", ft_isdigit(teste));
    printf("original: %d\n\n", isdigit(teste));
    
    printf("TESTING FT_ISALNUM \n\n");
    printf("my: %d\n", ft_isalnum(teste));
    printf("original: %d\n\n", isalnum(teste));

    printf("TESTING FT_ISASCII \n\n");
    printf("my: %d\n", ft_isascii(teste));
    printf("original: %d\n\n", isascii(teste));
}