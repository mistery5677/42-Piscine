#include "libft.h"

int start(char const *s1, char const *set)
{
        int j;

        j = 0;
        while((ft_strchr(set, s1[j]) == NULL))       
                j++;
        return j + 1;
}

int end(char const *s1, char const *set)
{
        int j;

        j = ft_strlen(s1) - 1;
        while((ft_strrchr(set, s1[j]) == NULL))       
                j--;
        return j - 1;
}

/*char *ft_strtrim(char const *s1, char const *set)
{
        int str_start;
        int str_end;
        int i;
        char *str;

        str_start = start(s1, set);
        str_end = end(s1, set);
        if(str_end < 0)
                return ft_strdup((char *)s1);
        if(str_start > str_end)
                return NULL;
        str = malloc(((str_end - str_start) + 1) * sizeof(char));
        if(str == NULL)
                return NULL;
        i = 0;
        while((str_end - str_start) >= i)
        {
                printf("copiou");
                str[i] = s1[str_start + i];
                i++;
        }
        str[i] = '\0';
        return str;
}*/

char *ft_strtrim(char const *s1, char const *set)
{
        int str_start;
        int str_end;
        char *str;

        str_start = start(s1, set);
        str_end = end(s1, set);
        if(str_end < 0)
                return ft_strdup((char *)s1);
        if(str_start > str_end)
                return NULL;
        str = ft_substr(s1, str_start, str_end - str_start);
        return str;
}