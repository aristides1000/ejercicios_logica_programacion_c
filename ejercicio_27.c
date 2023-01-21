/*
27. Dado un número n y un número m, hacer una función que determine si n es múltiplo de m. Un número es múltiplo de otro si al dividirlo su residuo es cero. Ejemplo: 15 es multiplo de 5, pues al dividir 15 entre 5, el residuo es 0.
*/

#include <stdio.h>

int main()
{
    int n, m, residuo;

    printf("Digite el numero n: "); scanf("%i", &n);
    printf("Digite el numero m: "); scanf("%i", &m);

    residuo = n % m;

    if(residuo == 0)
    {
        printf("El numero %i es multiplo de %i\n", n, m);
    }
    else
    {
        printf("El numero %i no es multiplo de %i\n", n, m);
    }

    printf("Preciona una tecla para continuar");
    getch();

    return 0;
}
