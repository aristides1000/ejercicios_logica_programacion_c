/*
10. Hacer una función, que dada una cadena de caracteres y dos números a y b, obtenga una subcadena con los b caracteres de la primera cadena, a partir de a. Por ejemplo con la cadena “nEoYOgA”,2,4, se obtendría la subcadena “oYOg”.
*/

#include <stdio.h>

int main()
{
    char cadena[100], subcadena[100];
    int i, j, a, b;

    printf("Digite una cadena: "); gets(cadena);
    printf("Digite un numero: "); scanf("%i", &a);
    printf("Digite un numero: "); scanf("%i", &b);

    for(i = a, j = 0; i < a + b; i++, j++)
    {
        subcadena[j] = cadena[i];
    }

    subcadena[j] = '\0';

    printf("La subcadena es: %s", subcadena);

    printf("\nPreciona una tecla para continuar");
    getch();

    return 0;
}