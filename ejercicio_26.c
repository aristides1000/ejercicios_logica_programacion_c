/*
26. Hacer un procedimiento, para la pirámide de bolas, que retorne para una cantidad n, mayor que uno, de bolas, la cantidad de capas que tendrá la pirámide y la cantidad de bolas que sobran.
*/

#include <stdio.h>

int main()
{
    int n, capas, sobran;

    printf("Digite la cantidad de bolas: "); scanf("%i", &n);

    capas = 1;
    sobran = 0;

    while(n > 0)
    {
        n = n - capas;
        capas++;
    }

    if(n < 0)
    {
        capas--;
        sobran = n + capas;
    }

    printf("La cantidad de capas es: %i\n", capas);
    printf("La cantidad de bolas que sobran es: %i\n", sobran);

    printf("Preciona una tecla para continuar");
    getch();

    return 0;
}
