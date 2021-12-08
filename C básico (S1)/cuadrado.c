/*
Realiza un programa llamado cuadrado.c
 que lea un nº entero y lo eleve al cuadrado (funciones scanf() y printf())
*/
#include <stdio.h>

int main(){
    int numero;
    printf("Introduce un número: ");
    scanf("%d", &numero);
    numero = numero*numero;
    printf("El resultado es: %d", numero);
    return 0;
}