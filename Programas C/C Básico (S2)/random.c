/*
Realiza un programa que contenga una función que genere 
10 números aleatorios en un vector y devuelva el puntero al vector.

Para devolver un vector en una función, ésta debe declararse de tipo puntero.
int *getRandom(void);  //declara una función que devuelve un puntero a un entero
Y la variable de retorno ha de estar declarada como static dentro de la función.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *getRandom(void);

int main()
{
    int *p;
    p = getRandom();
    printf("\nValores devueltos por la función\n");
    for (int i = 0; i < 10; i++)
    {
        printf("*(p+%d) = %d\n", i, *(p + i));
    }

    return 0;
}

int *getRandom(void)
{
    static int r[10];
    srand((unsigned)time(NULL)); // inicializamos la semilla
    printf("Valores generados dentro de la función\n");
    for (int i = 0; i < 10; i++)
    {
        r[i] = rand();
        printf("r[%d] = %d\n", i, r[i]);
    }
    return r;
}