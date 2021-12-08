/*
Realiza un programa llamado grados.c que convierta grados Fahrenheit a grados
centígrados (funciones scanf() y printf()). La fórmula de conversión es C=(5/9) *(F-32)
*/
#include <stdio.h>

int main()
{
    float fahrenheit, grados;
    printf("CONVERSOR DE FAHRENHEIT A GRADOS CENTIGRADOS");
    printf("\nIntroduce los fahrenheit: ");
    scanf("%f", &fahrenheit);
    grados = (5.0 / 9.0) * (fahrenheit - 32);
    printf("%.2f a grados es: %.2f", fahrenheit, grados);
    return 0;
}