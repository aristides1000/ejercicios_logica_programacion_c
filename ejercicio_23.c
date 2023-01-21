/*
23. Hacer una función que compare dos cadenas dadas y retorne verdadero si son iguales, y falso si no.
*/

#include <stdio.h>

int main()
{
    char cadena1[100], cadena2[100];
    int i, longitud1, longitud2, igual = 0;

    printf("Digite la primera cadena: "); gets(cadena1);
    printf("Digite la segunda cadena: "); gets(cadena2);

    longitud1 = strlen(cadena1);
    longitud2 = strlen(cadena2);

    if(longitud1 == longitud2)
    {
        for(i = 0; i < longitud1; i++)
        {
            if(cadena1[i] == cadena2[i])
            {
                igual++;
            }
        }

        if(igual == longitud1)
        {
            printf("Las cadenas son iguales\n");
        }
        else
        {
            printf("Las cadenas no son iguales\n");
        }
    }
    else
    {
        printf("Las cadenas no son iguales\n");
    }

    printf("Preciona una tecla para continuar");
    getch();

    return 0;
}
