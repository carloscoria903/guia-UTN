#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float ladoA, ladoB, ladoC;
    printf("ingrese un lado " );
    scanf("%f", &ladoA);
    fflush(stdout);
    printf("ingrese otro lado " );
    scanf("%f", &ladoB);
    fflush(stdout);
    printf("ingrese otro lado " );
    scanf("%f", &ladoC);
    fflush(stdout);

    if (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA)
    {
        if (ladoA == ladoB && ladoB == ladoC)
        {
            printf("el triangulo es equilatero\n");
        }
        else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC)
        {
            printf("el triangulo es isosceles\n");
        }
        else
        {
            printf("el triangulo es escaleno\n");
        }
    }
    else
    {
        printf("el triangulo no es correcto\n");
    }

    getchar();
    return 0;
}
/*Los tres lados a, b y c de un triángulo deben satisfacer la desigualdad triangular:
cada uno de los lados no puede ser más largo que la suma de los otros dos.
Escriba un programa que reciba como entrada los tres lados de un triángulo, e indique: si acaso el triángulo es inválido; y si no lo es,
qué tipo de triángulo es.


La desigualdad triangular es un principio geométrico fundamental que establece una relación entre las longitudes de los lados
de un triángulo. Establece que en cualquier triángulo, la longitud de cada lado debe ser menor que la suma de las longitudes de los otros dos lados,
y que la diferencia de las longitudes de cada lado debe ser menor que la longitud del tercer lado.

Matemáticamente, para un triángulo con lados de longitud A , B y  C , la desigualdad triangular se expresa como sigue:

[ a + b > c ]
[ a + c > b ]
[ b + c > a ]

Esto implica que en un triángulo válido, la suma de las longitudes de cualquiera de dos lados debe ser siempre mayor que la longitud del tercer lado.

Por ejemplo, si tienes un triángulo con lados de longitudes 3, 4 y 5, cumple con la desigualdad triangular
porque 3 + 4 > 5, 3 + 5 > 4 y 4 + 5 > 3. Sin embargo, si tienes un triángulo con lados de longitudes 1, 2 y 6,
no cumple con la desigualdad triangular, ya que 1 + 2 no es mayor que 6.

El tipo de triángulo se determina por la relación entre las longitudes de sus lados. Aquí hay algunas reglas básicas para identificar
los tipos de triángulos:

1.Triángulo Equilátero: Un triángulo equilátero tiene todos sus lados de igual longitud. Esto significa que ( a = b = c ),
donde ( a ), ( b ) y ( c ) son las longitudes de los lados del triángulo.

2.Triángulo Isósceles: Un triángulo isósceles tiene al menos dos lados de igual longitud. Esto significa que dos de sus lados son
iguales, pero el tercero puede ser diferente. Por ejemplo, ( a = b ), ( a != c ), ( b != c ) o ( a = c ), ( a != b \), ( b != c \), etc.

3.Triángulo Escaleno: Un triángulo escaleno tiene todos sus lados de longitudes diferentes. Ninguno de los lados es igual a otro.
Esto significa que ( a != b != c ).

Si ( a = b = c ), es un triángulo equilátero.
Si ( a = b ) o ( a = c ) o ( b = c ), es un triángulo isósceles.
Si ( a != b != c ), es un triángulo escaleno.
*/