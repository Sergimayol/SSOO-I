/*
Realiza un programa llamado area.c que lea el radio de un círculo y calcule su área (funciones scanf() y printf()).
 Se ha de utilizar una constante PI con valor 3.141593. El resultado ha de tener 4 decimales 
*/
#include <stdio.h>
#define PI 3.141593

int main()
{
    float area;
    float radio;
    printf("**CALCULADORA DE AREA**");
    printf("\nIntroduce el radio: ");
    scanf("%f", &radio);
    area = PI * radio * radio;
    printf("El area del circulo es: %.4f", area);
    return 0;
}