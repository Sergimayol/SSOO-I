/*
Realiza un programa llamado calificacion.c que lea una calificación numérica
y devuelva “suspenso” si la nota<5, “aprobado” si 5<=nota <7, “notable si 
7<=nota<9 y sobresaliente si 9=<nota <=10. Indicar error si nota>10 
(sentencias if..else if..else)
 */
#include <stdio.h>

int main()
{
    float nota;
    printf("DETERMINAR CALIFICAION NOTA");
    printf("\nIntroduce una nota: ");
    scanf("%f", &nota);
    if (nota < 5)
    {
        printf("suspenso");
    }
    else if (nota < 7)
    {
        printf("aprobado");
    }
    else if (nota < 9)
    {
        printf("notable");
    }
    else if (nota <= 10)
    {
        printf("sobresaliente");
    }
    else
    {
        printf("numero introducido no es una nota");
    }
    return 0;
}