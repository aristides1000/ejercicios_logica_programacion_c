/*
21. Haga una función que determine el producto de dos números usando sumas sucesivas
*/

#include <stdio.h>

int main()
{
    int multiplicando, multiplicador, producto = 0;

    printf("Digite el multiplicando: "); scanf("%i", &multiplicando);
    printf("Digite el multiplicador: "); scanf("%i", &multiplicador);

    while(multiplicador > 0)
    {
        producto = producto + multiplicando;
        multiplicador--;
    }

    printf("El producto es: %i \n", producto);

    printf("Preciona una tecla para continuar");
    getch();

    return 0;
}