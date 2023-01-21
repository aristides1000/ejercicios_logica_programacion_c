/*
19. Haga una función que determine el promedio de n números agrupados en un arreglo numérico.
*/

#include <stdio.h>

int main()
{
    int i, numero, promedio = 0;
    int arreglo[100];

    printf("Digite el numero de elementos del arreglo: "); scanf("%i", &numero);

    for(i = 0; i < numero; i++)
    {
        printf("Digite un numero: "); scanf("%i", &arreglo[i]);
    }

    for(i = 0; i < numero; i++)
    {
        promedio = promedio + arreglo[i];
    }

    promedio = promedio / numero;

    printf("El promedio es: %i\n", promedio);

    printf("Preciona una tecla para continuar");
    getch();

    return 0;
}
