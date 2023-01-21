/*
18. Haga una función que lea una cadena de acuerdo a una mascarilla. La mascarilla determinará el tamaño de la cadena, y los caracteres que podrá tener la cadena. Ejemplo: se recibe la mascarilla “AaaaAA99”, la cadena resultante deberá tener como máximo 10 caracteres y estos deben ser: el primero, una letra mayúscula, desde el segundo hasta el cuarto letras minúsculas, los dos siguientes letras mayúsculas y los dos últimos dos dígitos.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char cadena[100], mascara[100];
    int i, longitud, valido = 0;

    printf("Digite una cadena: "); gets(cadena);
    printf("Digite una mascara: "); gets(mascara);

    longitud = strlen(cadena);

    for(i = 0; i < longitud; i++)
    {
        if(mascara[i] == 'A')
        {
            if(isupper(cadena[i]))
            {
                valido++;
            }
        }
        else if(mascara[i] == 'a')
        {
            if(islower(cadena[i]))
            {
                valido++;
            }
        }
        else if(mascara[i] == '9')
        {
            if(isdigit(cadena[i]))
            {
                valido++;
            }
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

    printf("Preciona una tecla para continuar");
    getch();

    return 0;
}
