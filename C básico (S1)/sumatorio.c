/*
Realiza un programa llamado sumatorio.c que lea
un número N y calcule 1+2+3+...+N (sentencia while)
*/
#include <stdio.h>

int main() {
    int numero, contador = 1;
    int sumatorio = 0;

    printf("***Cálculo de 1+2+...+N***\n");
    printf("Introduce un número N: ");
    scanf("%d", &numero);

    while (contador <= numero) {
        sumatorio = sumatorio + contador;
        contador++;
    }
    printf("1+2+...+%d = %d\n", numero, sumatorio);

    return 0;
}
