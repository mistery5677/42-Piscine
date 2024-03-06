#include "libft.h"

int count_words(char const *s, char c)
{
        int words;
        int i;

        i = 0;
        words = 0;
        if(s[i] != c)
                words++;
        while(s[i])
        {      
                if(s[i] == c)
                {
                        while(s[i] == c)
                                i++;
                        if(s[i] != '\0')
                                words++;
                        if(s[i] == '\0')
                                return words;
                }
                i++;
        }
        return words;
}

/*char **ft_split(char const *s, char c)
{
        
}*/

/*int main()
{
        char const s_ft_split[] = "eeeee";
        char const s_ft_split1[] = "hhhhhheee";
        char const s_ft_split2[] = "eeeehabceeehhhh";
        char const s_ft_split3[] = "hhhhh";
        char const s_ft_split4[] = "eeehhehheee";

        printf("count_words: 0 --> %d\n", count_words(s_ft_split, 'e'));
        printf("count_words: 1 --> %d\n", count_words(s_ft_split1, 'e'));
        printf("count_words: 2 --> %d\n", count_words(s_ft_split2, 'e'));
        printf("count_words: 1 --> %d\n", count_words(s_ft_split3, 'e'));
        printf("count_words: 2 --> %d\n", count_words(s_ft_split4, 'e'));
}*/