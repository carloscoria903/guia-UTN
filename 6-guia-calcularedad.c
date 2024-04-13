#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int dia, mes, anio, edad, anioActual;
    printf("ingresar el dia de su nacimiento\n");
    scanf("%d", &dia);
    fflush(stdin);
    printf("ingrese el mes\n");
    scanf("%d", &mes);
    fflush(stdin);
    printf("ingresar el año en que nacio\n");
    scanf("%d", &anio);
    fflush(stdin);
    printf("ingresar el año actual\n");
    scanf("%d", &anioActual);
    fflush(stdin);
    edad = anioActual - anio;
    printf("su edad es %d\n", edad);

    getchar();
    return 0;
}