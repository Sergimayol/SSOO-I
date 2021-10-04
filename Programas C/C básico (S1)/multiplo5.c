/*
Realiza un programa llamado multiplo5.c que muestre,
tabulados de 5 en 5, por pantalla los números múltiplos 
de 5 comprendidos entre 1 y 100 (sentencia for, if)
*/

#include <stdio.h>

int main()
{
    int contador = 0;
    printf("***Números múltiplos de 5 ***\n");
    for (int i = 1; i <= 100; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d\t", i);
            contador++;
            if (contador % 5 == 0)
            {
                printf("\n");
            }
        }
    }
    return 0;
}