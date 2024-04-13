#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float radio, perimetro, area;
    const float pi = 3.14159;

    printf("ingrese el radio ");
    scanf("%f", &radio);
    fflush(stdin);

    perimetro = 2 * pi * radio;
    area = pi * radio * radio;

    printf("el perimetro es: %.2f \n", perimetro);
    printf("el area es: %.2f\n", area);

    getchar();
    return 0;
}