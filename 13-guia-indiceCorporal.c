#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float imc, peso, estatura;
    int edad;
    printf("Ingrese su estatura: ");
    scanf("%f", &estatura);
    fflush(stdout);
    printf("Ingrese su peso: ");
    scanf("%f", &peso);
    fflush(stdout);
    printf("Ingrese su edad: ");
    scanf("%f", &edad);
    fflush(stdout);
    imc = peso / (estatura * estatura);
    printf("Su IMC es: %.2f\n", imc);
    if (edad < 45 && imc < 22.0)
    {
        printf("riesgo bajo");
    }
    else if (edad < 45 && imc >= 22.0)
    {
        printf("riesgo medio");
    }
    else if (edad >= 45 && imc < 22.0)
    {
        printf("riesgo medio");
    }
    else
    {
        printf("riesgo alto");
    }

    getchar();
    return 0;
}
/*
El riesgo de que una persona sufra enfermedades coronarias depende
de su edad y su índice de masa corporal:
            edad < 45   edad >= 45
IMC < 22.0   bajo         medio
IMC >= 22.0  medio        alto
El índice de masa corporal es el cociente entre el peso del individuo en kilos y el cuadrado de su estatura en metros.
Escriba un programa que reciba como entrada la estatura, el peso y la edad de una persona, y le entregue su condición de riesgo
*/