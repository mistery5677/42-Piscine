#include <stdlib.h>
#include <stdio.h>

char *str_start(char *str, char *charset, int i) //Vai passar as palavras, até encontrar uma letra que não esteja no "charset"
{
        //int i;
        int j;

        //i = 0;
        while(str[i])
        {
                j = 0;
                while((str[i] != charset[j]) && charset[j]) //comparar a str com o "*charset"
                        j++;
                if(str[i] == charset[j])
                        i++;
                else
                        return str + i;
        }
        return str + i;
}

int count_words(char *str, char *charset)
{
        int i;
        int j;
        int words;

        i = 0;
        words = 1;
        str = str_start(str, charset, 0);
        if(str[0] == '\0')
                return 0;
        while(str[i])
        {
                j = 0;
                while((str[i] != charset[j]) && charset[j]) //comparar a str com o "*charset"
                        j++;
                //printf("str: %c\n", str[i]);
                //printf("charset: %c\n", charset[i]);
                if(str[i] == charset[j])
                {
                        //printf("Entrada: %s\n", str);
                        str = str_start(str + i, charset, 0);
                        i = 0;
                        if (str[i] != '\0') //Colocamos esta condição para que não conte como palavra se tivermos 2 charset no final EX"hhh"
                                words++;
                }
                i++;
        }
        return words;
}

int word_len(char *str, char *charset)
{
        int i;
        int j;
        int size;

        size = 0;
        i = 0;
        while(str[i])
        {
                j = 0;
                while((str[i] != charset[j]) && charset[j]) //comparar a str com o "*charset"
                        j++;
                if(str[i] == charset[j])
                        return size;
                size++;
                i++;
        }
        return size;
}

void build_str(char *split, char *str, int size)
{
        int i;
        
        i = 0;
        while(i < size)
        {
                split[i] = str[i];
                i++;
        }
        split[i] = '\0';
}

char **ft_split(char *str, char *charset)
{
	char **split;
	int i; //percorrer a "str"
	int words;
        int size_word;

        size_word = 0;
	i = 0;
	words = count_words(str,charset);
	split = malloc((words + 1) * sizeof(char*));
	if(split == NULL)
		return NULL;
	while(i < words)
	{
                str = str_start(str, charset, size_word); //Para podermos percorrer a "str" toda, temos de adicionar "size_word", em que vai passar essa informação para a função "str_start"
                size_word = word_len(str, charset);
		split[i] = malloc((size_word + 1) *sizeof(char));
		if(split[i] == NULL)
			return NULL;
		build_str(split[i], str, size_word);
		i++;
	}
	return split;
}

int main()
{
	char str[20] = "";
	char *charset = "h04";
	char **split = ft_split(str, charset);

        //printf("%s\n", str_start(str, charset)); //TESTAR STR_START
        //printf("%d\n\n", count_words(str, charset)); //TESTAR COUNT_WORDS
        //printf("string: %s\n", str);
        //printf("word_len: %d\n", word_len(str, charset)); //TESTAR O TAMANHO DA STRING

        

	//free(split);
}