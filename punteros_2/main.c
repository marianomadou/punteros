#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
//clase 15 de punteros

int main()
{
    char* c, palabra[50];

    printf("Digite una frase: ");
    gets(palabra);

    c=calloc(strlen(palabra)+1, sizeof(char));

    strcpy(c,palabra);

    printf("La frase es: %s", c);

    getche();

    free(c);

    printf("despues de liberada la memoria, el valor de la variable es: %s", c);

    getche();

    return 0;
}
