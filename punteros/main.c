#include <stdio.h>
#include <stdlib.h>
//clase 15 de punteros

int main()
{


    int* pMiEntero;
    int miEntero;

    pMiEntero=&miEntero;

    *pMiEntero=5;

    printf("valor de la variable puntero:%d\n", *pMiEntero);
    printf("valor de la variable:%d\n", miEntero);
    printf("Posicion de memoria del puntero:%p\n", pMiEntero);
    printf("Posicion de memoria del puntero prueba:%p\n", &pMiEntero);
    printf("Posicion de memoria de la variable:%p\n", &miEntero);



    return 0;
}
