/*
29. Para encontrar el máximo común divisor (mcd) de dos números se emplea el algoritmo de Euclides, que se puede describir así: Dados los enteros a y b (a > b), se divide a por b, obteniendo el cociente q1 y el residuo r1. Si r1 <> 0, se divide b por r1, obteniendo el cociente q2 y el residuo r2. Si r2 <> 0, se divide r1 por r2, obteniendo q3 y r3, y así sucesivamente, se continúa el proceso hasta que se obtiene un residuo 0. Al final el residuo anterior es el mcd de a y b. Ejemplo:
- Para a = 15 y b = 6, 15/6, se obtiene q1 = 2 y r1 = 3;
6/3, se obtiene q2 = 2 y r2 = 0, entonces el mcd = 3 (r1)
- Para a = 30 y b = 14, 30/14, se obtiene q1 = 2 y r1 = 2;
14/2, se obtiene q2 = 7 y r2 = 0, entonces el mcd = 2 (r1)
- Para a = 45 y b = 15, 45/15, se obtiene q1 = 3 y r1 = 0, entonces el mcd = 15 (b)
- Para a = 45 y b = 20, 45/20, se obtiene q1 = 2 y r1 = 5;
20/5, se obtiene q2 = 4 y r2 = 0, entonces el mcd = 5 (r1)
- Para a = 45 y b = 25, 45/25, se obtiene q1 = 1 y r1 = 20;
25/20, se obtiene q2 = 1 y r2 = 5;
20/5, se obtiene q3 = 4 y r3 = 0, entonces el mcd = 5 (r2)
- Para a = 45 y b = 35, 45/35, se obtiene q1 = 1 y r1 = 10;
35/10, se obtiene q2 = 3 y r2 = 5;
10/5, se obtiene q3 = 2 y r3 = 0, entonces el mcd = 5 (r2)
- Para a = 45 y b = 40, 45/40, se obtiene q1 = 1 y r1 = 5;
40/5, se obtiene q2 = 8 y r2 = 0, entonces el mcd = 5 (r1)
- Para a = 45 y b = 45, 45/45, se obtiene q1 = 1 y r1 = 0, entonces el mcd = 45 (a)
*/

#include <stdio.h>

int main(void) {
    int a, b, q, r;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    if (a < b) {
        int aux = a;
        a = b;
        b = aux;
    }

    do {
        q = a / b;
        r = a % b;
        if (r != 0) {
            a = b;
            b = r;
        }
    } while (r != 0);

    printf("El maximo comun divisor es: %d\n", b);

    printf("Preciona una tecla para continuar");
    getch();

    return 0;
}

/* Salida
Ingrese el primer número: 45
Ingrese el segundo número: 35
El máximo común divisor es: 5
*/

/* Explicación
- Para a = 45 y b = 35, 45/35, se obtiene q1 = 1 y r1 = 10;
35/10, se obtiene q2 = 3 y r2 = 5;
10/5, se obtiene q3 = 2 y r3 = 0, entonces el mcd = 5 (r2)
*/

/* Salida
Ingrese el primer número: 45
Ingrese el segundo número: 25
El máximo común divisor es: 5
*/

/* Explicación
- Para a = 45 y b = 25, 45/25, se obtiene q1 = 1 y r1 = 20;
25/20, se obtiene q2 = 1 y r2 = 5;
20/5, se obtiene q3 = 4 y r3 = 0, entonces el mcd = 5 (r2)
*/

/* Salida
Ingrese el primer número: 45
Ingrese el segundo número: 40
El máximo común divisor es: 5
*/

/* Explicación
- Para a = 45 y b = 40, 45/40, se obtiene q1 = 1 y r1 = 5;
40/5, se obtiene q2 = 8 y r2 = 0, entonces el mcd = 5 (r1)
*/
