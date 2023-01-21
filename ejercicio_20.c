/*
20. Haga una función que determine el cociente de una división usando restas sucesivas.
*/

#include <stdio.h>

int main()
{
    int dividendo, divisor, cociente = 0;

    printf("Digite el dividendo: "); scanf("%i", &dividendo);
    printf("Digite el divisor: "); scanf("%i", &divisor);

    while(dividendo >= divisor)
    {
        dividendo = dividendo - divisor;
        cociente++;
    }

    printf("El cociente es: %i\n", cociente);

    printf("Preciona una tecla para continuar");
    getch();

    return 0;
}
