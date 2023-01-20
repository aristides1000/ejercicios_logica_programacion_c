/*
7. Hacer una función que dadas las coordenadas de la esquina superior izquierda y la esquina inferior derecha de una caja, dibuje la caja.
*/

#include <stdio.h>

int main()
{
    int i, j, x1, y1, x2, y2;

    printf("Digite las coordenadas de la esquina superior izquierda: "); scanf("%i %i", &x1, &y1);
    printf("Digite las coordenadas de la esquina inferior derecha: "); scanf("%i %i", &x2, &y2);

    for(i = y1; i >= y2; i--)
    {
        for(j = x1; j <= x2; j++)
        {
            if(i == y1 || i == y2 || j == x1 || j == x2){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\nPreciona una tecla para continuar");
    getch();

    return 0;
}
