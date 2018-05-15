#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void cargarDatos(int *, int t);
void mostrarDatos(int *, int t);

int main()
{

    int vec[3];
    cargarDatos(vec, 3);
    mostrarDatos(vec, 3);
    getch();
    return 0;
}

void cargarDatos(int *pEntero, int t)
{
    int i;
    for(i=0;i<t;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",pEntero+i);
    }
}

void mostrarDatos(int *pEntero, int t)
{
    int i;
    for(i=0;i<t;i++)
    {
        printf("\n%d\n",*(pEntero+i));
    }
}
