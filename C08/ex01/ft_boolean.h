#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

#include <stdbool.h>
#include <unistd.h>
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define SUCCESS 0

typedef enum { 
    FALSE = 0,
    TRUE = 1
} t_bool;
//tem a função de definir um tipo, mas com outro nome, podiamos também definir um "int", para "MeuInt" ... por exemplo
//A expressão "enum", serve para enumerar várias constantes, como o boleano funciona como "true / false" ou "1 / 0", mas o subject pede para definir "TRUE / FALSE", então neste caso temos de definir valores

bool EVEN(int nbr)
{
    if(nbr % 2 == 0)
        return true;
    else
        return false;
}
#endif