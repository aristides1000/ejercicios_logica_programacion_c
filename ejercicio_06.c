/*
6. Hacer una función que diga si un número es narcisista.

Numeros narcisistas
Son aquellos numeros iguales a la suma de sus digitos elevados a la potencia de la cantidad de digitos que tiene el numero.

Ejemplo:

153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
1634 = 1^4 + 6^4 + 3^4 + 4^4 = 1 + 1296 + 81 + 256 = 1634
54748 = 5^5 + 4^5 + 7^5 + 4^5 + 8^5 = 3125 + 1024 + 16807 + 1024 + 32768 = 54748

*/

#include <stdio.h>
#include <math.h>

int main()
{
    int i, numero, cont = 0, aux, suma = 0;

    printf("Digite un numero: "); scanf("%i", &numero);

    aux = numero;

    while(aux > 0)
    {
        aux = aux / 10;
        cont++;
    }

    aux = numero;

    while(aux > 0)
    {
        suma = suma + pow(aux % 10, cont);
        aux = aux / 10;
    }

    if(suma == numero){
        printf("El numero %i es narcisista\n", numero);
    }
    else{
        printf("El numero %i no es narcisista\n", numero);
    }

    printf("Preciona una tecla para continuar");
    getch();

    return 0;
}
