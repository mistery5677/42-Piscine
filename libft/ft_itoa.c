#include "libft.h"

size_t divide_nbr(int n)
{
    int i;

    i = 0;
    if(n < 0)
    {
        n *= -1;
        i++;
    }
    if(n == 0)
        return 1;
    while(n > 0)
    {
        n = n / 10;
        i++;
    }
    return i;
}

void build_p(char *str, int n, int size)
{
    while(--size >= 0)
    {
        str[size] = (n % 10) + '0';;
        n = n /10;
    }
}

void build_n(char *str, int n, int size)
{
    n *= -1;
    while(--size > 0)
    {
        str[size] = (n % 10) + '0';;
        n = n /10;  
    }
    str[size] = '-';
}

char *ft_itoa(int n)
{
    char *str;
    long nbr = n;
    size_t size;

    size = divide_nbr(nbr);
    str =  malloc((size + 1) * sizeof(char));
    if (n >= 0)
        build_p(str, nbr, size);
    else
        build_n(str, nbr, size);
    return str;
}

/*int main()
{
    printf("123 --> %s\n", ft_itoa(122231));
    printf("0 --> %s\n", ft_itoa(0));
    printf("-123 --> %s\n", ft_itoa(-12321312));
    //printf("divided by %d\n", divide_nbr(n_itoa));
}*/