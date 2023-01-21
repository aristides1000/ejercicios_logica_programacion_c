/*
28. Hacer una función que determine si un número entero dado es un número perfecto. Un número es perfecto si la suma de sus
divisores es igual al número. Utilice la función que determina si un número es múltiplo de otro.
Ejemplo:
- 6, es un numero perfecto, pues sus divisores son 1,2,3 y su suma es 1+2+3 = 6.
- 28, es un numero perfecto, pues sus divisores son 1,2,4,7,14 y su suma es 1+2+4+7+14 = 28.
- 12, no es un numero perfecto, pues sus divisores son 1,2,3,4,6 y su suma es 1+2+3+4+6 = 16.
- 15, no es un numero perfecto, pues sus divisores son 1,3,5 y su suma es 1+3+5 = 9.
- 16, no es un numero perfecto, pues sus divisores son 1,2,4,8 y su suma es 1+2+4+8 = 15.
- 496, es un numero perfecto, pues sus divisores son 1,2,4,8,16,31,62,124,248 y su suma es 1+2+4+8+16+31+62+124+248 = 496.
*/

#include <stdio.h>

int main()
{
    int numero, divisor, suma_divisores = 0;

    printf("Digite un numero: "); scanf("%i", &numero);

    for(divisor = 1; divisor < numero; divisor++)
    {
        if(numero % divisor == 0)
        {
            suma_divisores = suma_divisores + divisor;
        }
    }

    if(suma_divisores == numero)
    {
        printf("El numero %i es perfecto\n", numero);
    }
    else
    {
        printf("El numero %i no es perfecto\n", numero);
    }

    printf("Preciona una tecla para continuar");
    getch();

    return 0;
}
