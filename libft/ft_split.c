#include "libft.h"
#include <stdio.h>

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

int word_size(char const *s, char c)
{
        int i;

        i = 0;
        while(s[i] != c)
                i++;
        return i;
}

void build_str(char *str, const char *s, char c)
{
        int i;

        i = 0;
        while(s[i] != c)
        {
                str[i] = s[i];
                i++;
        }        
}
char **ft_split(char const *s, char c)
{
        char **str_split;
        size_t i;
        int word;

        word = 0;
        i = 0;
        if(!s || !(str_split = malloc(count_words(s, c) * sizeof(char))))
                return NULL;
        while(word < count_words(s, c))
        {
                while(s[i] == c)
                        i++;
                str_split[word] = malloc(word_size(&s[i], c) * sizeof(char));
                if(!str_split[word])
                        return NULL;
                build_str(str_split[word],&s[i], c);
                while(s[i] != c)
                        i++;
                word++;
        }
        return str_split;
}


/*int main()
{
        char const s_ft_split[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
        char const s_ft_split1[] = "hhhhhheeehh";
        char const s_ft_split2[] = "eeeehabceeehhhh";
        char const s_ft_split3[] = "hhhhh";
        char const s_ft_split4[] = "eeehhehheee";

        ft_split(s_ft_split, ' ');
        printf("count_words: 0 --> %d\n", count_words(s_ft_split, ' '));
        printf("count_words: 2 --> %d\n", count_words(s_ft_split1, 'e'));
        printf("count_words: 2 --> %d\n", count_words(s_ft_split2, 'e'));
        printf("count_words: 1 --> %d\n", count_words(s_ft_split3, 'e'));
        printf("count_words: 2 --> %d\n", count_words(s_ft_split4, 'e'));
}*/