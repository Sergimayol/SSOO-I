/*
Realiza un programa llamado par.c que lea un número e 
indique si es par o impar (sentencia if..else)
*/

#include <stdio.h>

int main()
{
    int numero;
    printf("DETERMINAR SI UN NUM ES PAR O IMPAR");
    printf("\nIntroduce un numero: ");
    scanf("%d", &numero);
    if (numero % 2 == 0)
    {
        printf("El num. es par.");
    }
    else
    {
        printf("El num. es impar.");
    }
    return 0;
}