/*
Realiza un programa llamado continuar.c que pregunte si se desea
continuar (S) o no (N) e indique error si no se introduce ninguna
de esas letras (sentencia switch). Si el usuario pulsa “s” o “S”
le aparecerá el mensaje “Ahora seguimos”, si pulsa “n” o “N” le 
aparecera el mensaje “Nos vemos en otra ocasión”, y si no pulsa
 ninguna de estas letras se le indicará “Opción incorrecta” 
*/
#include <stdio.h>

int main()
{
    printf("***Determinar si continuar o no***\n");
    printf("¿Deseas continuar (S) o no (N)? ");
    char caracter;
    scanf("%c", &caracter);
    switch (caracter)
    {
    case 's':
    case 'S':
        printf("Continuamos.");
        break;
    case 'n':
    case 'N':
        printf("No continuamos.");
        break;
    default:
        printf("Opcion incorrecta.");
        break;
    }
    return 0;
}