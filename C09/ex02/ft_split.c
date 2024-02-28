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

int len_word(char *str, char *charset, int index)
{
    int i;
    int j;

    i = 0;
    while(str[index])
    {
        j = 0;
        while(charset[j] && (charset[j] != str[index]))
            j++;
        if(charset[j] == str[i])
            return i;
        else
            i++;
        index++;
    }
    return i;
}

char **ft_split(char *str, char *charset)
{
    char **split;
    int i; //percorrer a "str"
    int j; //percorrer o "split"

    i = 0;
    //split = malloc((count_words(str, charset) + 1) * sizeof(char));
    while(str[i])
    {
        //split[j] = malloc((len_word(str, charset, i)) *sizeof(char))
        i = len_word(str, charset, i);
        printf("%d\n", len_word(str,charset, i));
        i++;
    }
    return split;
}

int main()
{
    char str[15] = "world 4 bora";
    char *charset = "4";

    printf("%s\n", *ft_split(str,charset));
}