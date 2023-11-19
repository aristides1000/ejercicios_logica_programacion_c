/*
8. Hacer una función que diga si una palabra es un palíndromo.
*/

#include <stdio.h>

int main()
{
    char palabra[100];
    int i, j, cont = 0;

    printf("Digite una palabra: "); gets(palabra);

    for(i = 0, j = strlen(palabra) - 1; i < strlen(palabra); i++, j--)
    {
        if(palabra[i] == palabra[j])
        {
            cont++;
        }
    }

    if(cont == strlen(palabra)){
        printf("La palabra %s es un palindromo\n", palabra);
    }
    else{
        printf("La palabra %s no es un palindromo\n", palabra);
    }

    printf("Preciona una tecla para continuar");
    getch();

    return 0;
}
