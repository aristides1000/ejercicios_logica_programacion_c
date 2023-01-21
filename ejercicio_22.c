/*
22. Haga una función que determine la raíz aproximada de un numero natural. La raíz aproximada de un número es el entero, cuyo cuadrado es inmediatamente menor al número. Ejemplo: la raíz aproximada de 50 es 7, porque 7*7 es 49.
*/

#include <stdio.h>

int main()
{
    int numero, raiz = 0;

    printf("Digite un numero: "); scanf("%i", &numero);

    while(raiz * raiz <= numero)
    {
        raiz++;
    }

    raiz--;

    printf("La raiz aproximada es: %i\n", raiz);

    printf("Preciona una tecla para continuar");
    getch();

    return 0;
}
