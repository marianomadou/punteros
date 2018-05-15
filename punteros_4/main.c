#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAM 3

void cargarDatos(int *);
void mostrarDatos(int *);

int main()
{
    int vec[TAM];
    cargarDatos(vec);
    mostrarDatos(vec);
    getch();
    return 0;
}

void cargarDatos(int *pEntero)
{
    int i;
    for(i=0;i<TAM;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",pEntero+i);
    }
}

void mostrarDatos(int *pEntero)
{
    int i;
    for(i=0;i<TAM;i++)
    {
        printf("\n%d\n",*(pEntero+i));
    }
}
