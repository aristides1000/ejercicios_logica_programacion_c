/*
11. Hacer una función que determine el elemento mayor en un arreglo numérico que no estaba previamente ordenado.
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    int i, numero, mayor = INT_MIN;
    int arreglo[100];

    printf("Digite el numero de elementos del arreglo: "); scanf("%i", &numero);

    for(i = 0; i < numero; i++)
    {
        printf("Digite un numero: "); scanf("%i", &arreglo[i]);
    }

    for(i = 0; i < numero; i++)
    {
        if(arreglo[i] > mayor)
        {
            mayor = arreglo[i];
        }
    }

    printf("El numero mayor es: %i\n", mayor);

    printf("Preciona una tecla para continuar");
    getch();

    return 0;
}
