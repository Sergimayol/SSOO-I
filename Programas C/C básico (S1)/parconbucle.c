/*
Realiza un programa llamado parconbucle.c que lea repetidamente
un nº e indique si es par o impar. El programa se repite mientras 
el número sea distinto de 0 (sentencia do-while)
*/
#include <stdio.h>

int main() {

    int numero;

    printf("***Determinar si un número es par o impar***\n");
    do {
        printf("Introduce un número: ");
        scanf("%d", &numero);

        if (numero % 2 == 0)
            printf("El número %d es par\n", numero);
        else
            printf("El número %d es impar\n", numero);

    } while (numero != 0);

    return 0;
}