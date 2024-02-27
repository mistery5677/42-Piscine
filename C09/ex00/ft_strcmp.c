int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] || s2[i])
    {
        if(s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char *s1 = "BRUH";
    char *s2 = "";
    printf("int: %d", ft_strcmp(s1, s2));
    printf("int: %d", strcmp(s1, s2));
}