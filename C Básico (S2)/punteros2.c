/*
Dada la siguiente declaración de variables:
int x, *px;
crea un programa llamado punteros2.c que imprima:
- el valor de x,  
- la dirección de x (o sea &x), 
- el contenido de la dirección almacenada en px (o sea *px),
- el valor de px 
después de cada una de las siguientes asignaciones consecutivas:
a) x = 12; px = &x; 
b) *px = *px + 10;
c) x = *px + 10;
d) *px += 1;
*/
#include <stdio.h>

int main()
{
    int x, *px;
    // a)
    x = 12;
    px = &x;
    printf("a) Valor de x: %d, de &x: %p, de *px: %d y de px: %p\n", x, &x, *px, px);
    // b)
    *px = *px + 10;
    printf("b) Valor de x: %d, de &x: %p, de *px: %d y de px: %p\n", x, &x, *px, px);
    // c)
    x = *px + 10;
    printf("c) Valor de x: %d, de &x: %p, de *px: %d y de px: %p\n", x, &x, *px, px);
    // d)
    *px += 1;
    printf("d) Valor de x: %d, de &x: %p, de *px: %d y de px: %p\n", x, &x, *px, px);
}