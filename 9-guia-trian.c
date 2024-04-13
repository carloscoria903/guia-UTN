#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    float a, b, c;

    printf("ingrese la primera longitud ");
    scanf("%f", &a);
    fflush(stdout);
    printf("ingrese la segunda longitud ");
    scanf("%f", &b);
    fflush(stdout);

    c = (a * a) + (b * b);
    printf("la hipotenusa es %.2f", c);
    getchar();
    return 0;
}
/*
Escriba un programa que reciba como entrada las longitudes de los dos catetos a y b de un triángulo rectángulo,
y que entregue como salida el largo de la hipotenusa c del triángulo, dado por el teorema de Pitágoras: c2=a2+b2.
*/