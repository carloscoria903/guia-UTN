#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int anio;
    printf("ingrese un año \n");
    scanf("%d",&anio);
    fflush(stdin);

    if ((anio % 4 == 0) && ((anio % 100 != 0) || (anio % 400 == 0)))
    {
        printf("%d es año bisiesto",anio);
    } else {
        printf("%d no es año bisiesto",anio);
    }

    getchar();
    return 0;
}