#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarCaracteres(char cadena[], char caracter);

int main()
{
    char cadena[] = {'c', 's', 'd', 'd', 'w', 'q'};
    char caracter = 'd';
    int cont;

    cont = contarCaracteres(cadena, caracter);

    printf("%d", cont);

    return 0;
}


int contarCaracteres(char cadena[], char caracter)
{
    int i;
    int cont = 0;

    for(i=0; i<6; i++)
    {
        if(cadena[i] == caracter)
        {
            cont++;
        }
    }

    return cont;
}
