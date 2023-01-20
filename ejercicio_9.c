/*
9. Hacer una función que invierta una cadena de caracteres.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char cadena[100], cadena_invertida[100];
    int i, j;

    printf("Digite una cadena: "); gets(cadena);

    for(i = strlen(cadena) - 1, j = 0; i >= 0; i--, j++)
    {
        cadena_invertida[j] = cadena[i];
    }

    cadena_invertida[j] = '\0';

    printf("La cadena invertida es: %s", cadena_invertida);

    printf("\nPreciona una tecla para continuar");
    getch();

    return 0;
}