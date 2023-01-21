/*
16. Hacer una función que convierta un valor numérico a una cadena de dígitos.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int numero, i, j, longitud;
    char cadena[100];

    printf("Digite un numero: "); scanf("%i", &numero);

    for(i = 0; numero > 0; i++)
    {
        cadena[i] = numero % 10 + '0';
        numero = numero / 10;
    }

    cadena[i] = '\0';

    longitud = strlen(cadena);

    for(i = 0, j = longitud - 1; i < j; i++, j--)
    {
        cadena[i] = cadena[i] + cadena[j];
        cadena[j] = cadena[i] - cadena[j];
        cadena[i] = cadena[i] - cadena[j];
    }

    printf("La cadena es: %s \n", cadena);

    printf("Preciona una tecla para continuar");
    getch();

    return 0;
}
