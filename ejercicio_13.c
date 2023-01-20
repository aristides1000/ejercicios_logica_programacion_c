#include <stdio.h>
#include <limits.h>

int main()
{
    int i, numero, menor = INT_MAX, mayor = INT_MIN, rango;
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

    for(i = 0; i < numero; i++)
    {
        if(arreglo[i] > mayor)
        {
            mayor = arreglo[i];
        }
    }

    printf("El numero mayor es: %i\n", mayor);

    rango = menor - mayor;

    if (rango < 0)
    {
      rango = rango * -1;
    }

    printf("El rango es: %i\n", rango);

    printf("Preciona una tecla para continuar");
    getch();

    return 0;
}
