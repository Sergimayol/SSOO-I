#include <stdio.h>

int main() {
    unsigned int x;
    unsigned int y;
    unsigned int *px;

    //*px = 8;
    //printf("contenido de la dirección almacenada en px: *px = %d\n", *px);
    //printf("valor de px (igual a la dirección de x): px = %p\n", px); // valor de px
   
    x = 5;
    px = &x;
    y = *px;

    printf("dirección de x:\t\t\t\t\t &x = %p\n", &x); 
    printf("valor de x:\t\t\t\t\t x = %d\n", x);

    printf("dirección de px:\t\t\t\t &px= %p\n", &px);
    printf("valor de px:\t\t\t\t\t px = %p  //es la dirección de x\n", px);

    printf("dirección de y:\t\t\t\t\t &y = %p\n", &y);
    printf("contenido de la dirección almacenada en px:\t *px = %d\n", *px);
    printf("valor de y:\t\t\t\t\t y = %d\n", y);

    return 0;
}