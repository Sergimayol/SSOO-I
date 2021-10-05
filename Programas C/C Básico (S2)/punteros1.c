/*
Dada la siguiente declaración de variables
- int x, y;
- int *px;
y las siguientes asignaciones:
- x=5;
- px=&x;
- y=*px;
realiza un programa llamado punteros1.c que imprima:
- dirección de x (o sea &x)                                 
- valor de x                                   
- dirección de px (o sea &px)
- valor de px  (coincidirá con la dirección de x)                                  
- dirección de y (o sea &y)                                 
- contenido de la dirección almacenada en px, o dicho de otro modo,
 valor de la variable apuntada por px (o sea *px):      
        - valor de y
*/

#include <stdio.h>

int main()
{
    int x = 5, y; /* Variables de tipo entero. Reservan memoria para el tamaño de entero. */
    int *px;      /* Variable de tipo puntero a entero.  No reserva memoria para la variable
                  apuntada,  sino que asigna un lugar en la memoria para que posteriormente
                  se guarde ahí la dirección de aquella.
                  El operador unario * es el operador de indirección o de desreferenciación */
    px = &x;      /* Asigna a px la dirección de x .
                    El operador unario & es el operador de dirección */
    y = *px;      /* Asigna a y el contenido de la dirección almacenada en px */

    /*Los punteros se deben inicializar, ya sea al declararlos o mediante una asignación.Un puntero puede inicializarse a NULL(valor 0) o a una dirección.int *p = NULL; /*Inicializa un puntero a 0 con la constante simbólica NULL de stdio.h.
                            No apunta a nada. */
    printf("dirección de x:\t\t\t\t\t &x = %p\n", &x);
    printf("valor de x:\t\t\t\t\t x = %d\n", x);

    printf("dirección de px:\t\t\t\t &px= %p\n", &px);
    printf("valor de px:\t\t\t\t\t px = %p  //es la dirección de x\n", px);

    printf("dirección de y:\t\t\t\t\t &y = %p\n", &y);
    printf("contenido de la dirección almacenada en px:\t *px = %d\n", *px);
    printf("valor de y:\t\t\t\t\t y = %d\n", y);

    return 0;
}