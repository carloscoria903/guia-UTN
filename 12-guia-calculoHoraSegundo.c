#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int d, h, m, s, total;
    printf("ingrese la cantidad de dias ");
    scanf("%d", &d);
    fflush(stdout);
    printf("ingrese la cantidad de horas ");
    scanf("%d", &h);
    fflush(stdout);
    printf("ingrese la cantidad de minutos ");
    scanf("%d", &m);
    fflush(stdout);
    printf("ingrese la cantidad de segundos ");
    scanf("%d", &s);
    fflush(stdout);
    total = (d * 86400) + (h * 3600) + (m * 60) + s;
    printf("el tiempo es %d\n", total);

    getchar();
    return 0;
}

/*
Calcular e imprimir el número de segundos que hay en D días, H horas, M minutos y S segundos.
Días a segundos:

Para convertir los días en segundos, sabemos que hay 24 horas en un día y 3600 segundos en una hora. Por lo tanto,
multiplicamos el número de días por
24 × 3600 = 86400
24×3600 = 86400. Esto nos da el número de segundos en los días.
Horas a segundos:
Las horas también deben convertirse en segundos. Cada hora contiene 3600 segundos. Por lo tanto, multiplicamos el número de horas por 3600.
Minutos a segundos:

Los minutos también necesitan ser convertidos a segundos. Cada minuto contiene 60 segundos. Por lo tanto, multiplicamos el número de
minutos por 60.

Segundos:
Finalmente, simplemente agregamos los segundos dados.
Sumamos todas estas cantidades para obtener el total de segundos.
*/