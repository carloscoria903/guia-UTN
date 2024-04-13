#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    float cm, pul;
    pul = 2.54;
    printf("ingrese los centimetros a convertir ");
    scanf("%f",&cm);
    fflush(stdin);
    pul = cm * pul;
    printf("%.2f cm son %.2f pulgadas", cm ,pul);

    getchar();
    return 0;
}