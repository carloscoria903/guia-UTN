#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num1, num2;
    printf("ingrese el primer numero\n");
    scanf("%d", &num1);
    fflush(stdin);
    printf("ingrese el segundo numero\n");
    scanf("%d", &num2);
    fflush(stdin);

    if (num1 && num2 % 2 == 0)
    {
        printf("los numeros son divisibles");
    } else{
        printf("los numeros no son divisibles");
    }
    getchar();
    return 0;
}