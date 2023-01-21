/*
17. Dada una cadena de caracteres y un carácter, que puede ser A, a, 9, Z, determinar si la cadena es válida. Si el carácter es A, la cadena sera valida, si todos sus caracteres son letras mayúsculas, si el carácter es a, será valida si sus caracteres son todos letras minúsculas, si es.9, será valida si sus caracteres son todos dígitos y si el carácter es Z, será valida si sus caracteres son todos letras minúsculas, mayúsculas o dígitos.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char cadena[100], caracter;
    int i, longitud, valido = 0;

    printf("Digite una cadena: "); gets(cadena);
    printf("Digite un caracter: "); scanf("%c", &caracter);

    longitud = strlen(cadena);

    if(caracter == 'A')
    {
        for(i = 0; i < longitud; i++)
        {
            if(isupper(cadena[i]))
            {
                valido++;
            }
        }

        if(valido == longitud)
        {
            printf("La cadena es valida\n");
        }
        else
        {
            printf("La cadena no es valida\n");
        }
    }
    else if(caracter == 'a')
    {
        for(i = 0; i < longitud; i++)
        {
            if(islower(cadena[i]))
            {
                valido++;
            }
        }

        if(valido == longitud)
        {
            printf("La cadena es valida\n");
        }
        else
        {
            printf("La cadena no es valida\n");
        }
    }
    else if(caracter == '9')
    {
        for(i = 0; i < longitud; i++)
        {
            if(isdigit(cadena[i]))
            {
                valido++;
            }
        }

        if(valido == longitud)
        {
            printf("La cadena es valida\n");
        }
        else
        {
            printf("La cadena no es valida\n");
        }
    }
    else if(caracter == 'Z')
    {
        for(i = 0; i < longitud; i++)
        {
            if(isalnum(cadena[i]))
            {
                valido++;
            }
        }

        if(valido == longitud)
        {
            printf("La cadena es valida\n");
        }
        else
        {
            printf("La cadena no es valida\n");
        }
    }
    else
    {
        printf("El caracter no es valido\n");
    }

    printf("Preciona una tecla para continuar");
    getch();

    return 0;
}
