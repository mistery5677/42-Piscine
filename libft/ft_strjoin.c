#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
        int i;
        int len_s1;
        int len_s2;
        char *new_str;

        i = 0;
        len_s1 = ft_strlen(s1);
        len_s2 = ft_strlen(s2);
        new_str = malloc(((len_s1 + len_s2) + 1) + sizeof(char));
        if(new_str == NULL || len_s1 == 0 || len_s2 == 0)
                return NULL;
        while(s1[i])
        {
                new_str[i] = s1[i];
                i++;

        }
        ft_strlcat(new_str, s2, len_s1 + len_s2);
        return new_str;
}
