/*
12. Hacer una función que determine el elemento menor en un arreglo numérico que no estaba previamente ordenado.
*/

#include <stdio.h>

int main()
{
    int i, numero, menor;
    int arreglo[100];

    printf("Digite el numero de elementos del arreglo: "); scanf("%i", &numero);

    for(i = 0; i < numero; i++)
    {
        printf("Digite un numero: "); scanf("%i", &arreglo[i]);
    }

    for(i = 0; i < numero; i++)
    {
        if(arreglo[i] < menor)
        {
            menor = arreglo[i];
        }
    }

    printf("El numero menor es: %i\n", menor);

    printf("Preciona una tecla para continuar");
    getch();

    return 0;
}