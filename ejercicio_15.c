/*
15. Hacer una función que convierta una cadena de dígitos a un valor numérico.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char cadena[100];
    int i, longitud, numero = 0;

    printf("Digite una cadena: "); gets(cadena);

    longitud = strlen(cadena);

    for(i = 0; i < longitud; i++)
    {
        if(isdigit(cadena[i]))
        {
            numero = numero * 10 + (cadena[i] - '0');
        }
    }

    printf("El numero es: %i\n", numero);

    printf("Preciona una tecla para continuar");
    getch();

    return 0;
}