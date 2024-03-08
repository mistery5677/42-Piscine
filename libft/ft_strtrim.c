#include "libft.h"

int start(char const *s1, char const *set)
{
        int j;

        j = 0;
        while((ft_strchr(set, s1[j])))       
                j++;
        return j;
}

int end(char const *s1, char const *set)
{
        int j;

        j = ft_strlen(s1) - 1;
        while(ft_strchr(set, s1[j]) && j >= 0)       
                j--;
        return j;
}

char *ft_strtrim(char const *s1, char const *set)
{
        int str_start;
        int str_end;
        char *str;

        str_start = start(s1, set);
        str_end = end(s1, set);
        if(str_start > str_end)
                return 
        str = malloc(end - start + 2);
        if (!str)
		return (NULL);
        ft_strlcpy(str, &s1[str_start], str_end - str_start + 2);
        return str;
}

int main()
{
        const char *s1_strtrim = "nmnbnabb";
    const char *set_strtrim = "nm";
    char *str_strtrim = ft_strtrim(s1_strtrim, set_strtrim);
    printf("TESTING FT_STRTRIM \n\n");
    printf("meu: %s\n\n", str_strtrim);
    //printf("start: %d\n\n", start(s1_strtrim, set_strtrim));
    //printf("end: %d\n\n", end(s1_strtrim, set_strtrim));
    free(str_strtrim); 
}