#include <stdlib.h>
#include <stdio.h>

int count_words(char *str, char *charset)
{
    int i;
    int j;
    int words;

    i = 0;
    words = 0;
    while(str[i])
    {
        j = 0;
        while(charset[j] != str[i] && charset[j] != '\0')
            j++;
        if(charset[j] == str[i])
            words++;
        i++;
    }
    return words;
}

int len_word(char *str, char *charset)
{
    int i;
    int j;

    i = 0;
    printf("string %s\n", str);
    while(str[i])
    {
        j = 0;
        while(charset[j] != '\0' && (charset[j] != str[i]))
            j++;
        if(charset[j] == str[i])
            return i;
        i++;
    }
    printf("Terminou %d\n\n", i);
    return i;
}

int ft_split(char *str, char *charset)
{
    char **split;
    int i; //percorrer a "str"
    //int j; //percorrer o "split"
    int words;

    words = count_words(str,charset);
    i = 0;
    //split = malloc((count_words(str, charset) + 1) * sizeof(char));
    printf("Words %d\n\n", count_words(str,charset));
    while(i <= words)
    {
        //split[j] = malloc((len_word(str, charset, i)) *sizeof(char))
        str = (str + len_word(str, charset)) + 1;
        i++;
    }
    return 1;
}

int main()
{
    char str[15] = "";
    char *charset = "04";

    printf("final %d\n", ft_split(str,charset));
}