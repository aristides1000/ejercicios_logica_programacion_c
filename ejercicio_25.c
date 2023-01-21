/*
25. Dados los números m y n, escriba una función que retorne el número n elevado a la potencia m. Utilice multiplicaciones sucesivas.
*/

#include <stdio.h>

int main()
{
    int n, m, potencia = 1;

    printf("Digite el numero n: "); scanf("%i", &n);
    printf("Digite el numero m: "); scanf("%i", &m);

    while(m > 0)
    {
        potencia = potencia * n;
        m--;
    }

    printf("La potencia es: %i \n", potencia);

    printf("Preciona una tecla para continuar");
    getch();

    return 0;
}