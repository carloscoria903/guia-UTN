#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    float nota1, nota2, nota3, nota4, promedio;

    printf("Ingrese la nota 1:\n ");
    scanf("%f", &nota1);
    fflush(stdin);
    printf("Ingrese la nota 2:\n ");
    scanf("%f", &nota2);
    fflush(stdin);
    printf("Ingrese la nota 3:\n ");
    scanf("%f", &nota3);
    fflush(stdin);
    printf("Ingrese la nota 4:\n ");
    scanf("%f", &nota4);
    fflush(stdin);

    promedio = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("El promedio es: %.2f\n", promedio);
    getchar();
    return 0;
}