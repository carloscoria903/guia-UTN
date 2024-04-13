#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])

{
    int num1, num2;
    printf("Digite um número: ");
    scanf("%d", &num1);
    fflush(stdout);
    printf("Digite outro número: ");
    scanf("%d", &num2);
    fflush(stdout);

    if (num1 < num2)
    {
        printf("%d\n", num2);
        printf("%d\n", num1);
    }
    else
    {
        printf("ingreso un numro incorrecto");
    }
    getchar();
    return 0;
}
