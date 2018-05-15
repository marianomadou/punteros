#include <stdio.h>
#include <stdlib.h>
//clase 15 de punteros

int main()
{

    int vec[3];
    int* pEntero=NULL;
    int i;

    pEntero=vec;

    for (i=0; i<3;i++)
    {
        printf("ingrese un numero:");
        scanf("%i", pEntero + i);     //    scanf("%i", &pEntero[i]);
    }



    for (i=0; i<3;i++)
    {
        printf("%d\n", *(pEntero+i));
    }










/*
    pMiEntero=&miEntero;

    printf("%d\n", pMiEntero);
    printf("%d\n", pMiEntero+0);
    printf("%d\n", pMiEntero+1);
    printf("%d\n", pMiEntero+2);


    pMiEntero=pMiEntero+1; //se movio fisicamente el puntero

    printf("%d\n", pMiEntero);

--------------------------------------------

    pMiEntero=&miEntero;

    if (pMiEntero!=NULL)
    {
            printf("%d", *pMiEntero);
    }
    else{
        printf("El numero es nulo");
    }
-------------------------------------------------

    pMiEntero=&miEntero;

    pOtroPuntero=pMiEntero;



    printf("valor de la variable OTROpuntero:%d\n", *pOtroPuntero);
    printf("valor de la variable puntero:%d\n", *pMiEntero);
    printf("valor de la variable:%d\n", miEntero);
    printf("Posicion de memoria del puntero:%p\n", pMiEntero);
    printf("Posicion de memoria del puntero prueba:%p\n", &pMiEntero);
    printf("Posicion de memoria de la variable:%p\n", &miEntero);
*/


    return 0;
}
