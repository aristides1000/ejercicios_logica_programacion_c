/*
24. Hacer un programa que imprima los primeros 5 números narcicistas.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, k, numero, suma, longitud, narcicista;
    char cadena[100];

    for(i = 0; i < 5; i++)
    {
        numero = i;
        suma = 0;
        longitud = 0;

        for(j = 0; numero > 0; j++)
        {
            cadena[j] = numero % 10 + '0';
            numero = numero / 10;
            longitud++;
        }

        cadena[j] = '\0';

        for(k = 0; k < longitud; k++)
        {
            suma = suma + pow(cadena[k] - '0', longitud);
        }

        if(suma == i)
        {
            narcicista = i;
            printf("El numero narcicista es: %i \n", narcicista);
        }
    }

    printf("Preciona una tecla para continuar");
    getch();

    return 0;
}
