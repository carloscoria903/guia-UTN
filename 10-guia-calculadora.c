#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float a, b, c;
    char operador;
    printf("ingrese un numero ");
    scanf("%f", &a);
    fflush(stdin);
    printf("ingrese otro numero ");
    scanf("%f", &b);
    fflush(stdin);
    printf("indique que operacion quiere hacer ");
    scanf(" %c", &operador);
    fflush(stdin);

    if (operador == '+')
    {
        c = a + b;
        printf("la suma es %.2f ", c);
    }
    else if (operador == '-')
    {
        c = a - b;
        printf("la resta es %.2f ", c);
    }
    else if (operador == '*')
    {
        c = a * b;
        printf("la multiplicacion es %.2f ", c);
    }
    else if (operador == '/')
    {
        if (b != 0)
        {
            c = a / b;
            printf("la division es %.2f ", c);
        }
    }

    else
    {
        printf("opcion no valida");
    }
    getchar();
    return 0;
}
/*
Escriba un programa que simule una calculadora básica, este puede realizar operación de suma, resta, multiplicación y división.
El programa debe recibir como entrada 2 números reales y un operador, que puede ser +,-, * o /.
La salida del programa debe ser el resultado de la operación.
*/