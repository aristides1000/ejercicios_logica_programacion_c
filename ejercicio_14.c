/*
14. Hacer una función que determine si todos los caracteres de una cadena son letras mayúsculas.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char cadena[100];
    int i, longitud, mayuscula = 0;

    printf("Digite una cadena: "); gets(cadena);

    longitud = strlen(cadena);

    for(i = 0; i < longitud; i++)
    {
        if(isupper(cadena[i]))
        {
            mayuscula++;
        }
    }

    if(mayuscula == longitud)
    {
        printf("Todos los caracteres son mayusculas\n");
    }
    else
    {
        printf("No todos los caracteres son mayusculas\n");
    }

    printf("Preciona una tecla para continuar");
    getch();

    return 0;
}
