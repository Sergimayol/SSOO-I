/*
Realiza un programa llamado referencia.c que muestre los valores
de dos variables (incializadas como x=2 e y=5) antes y después 
de llamar a una función pasándolas por valor, y lo mismo llamando
a otra función pasándolas por referencia. En ambas funciones, 
a los argumentos pasados se les asignará el valor 0 y se mostrará 
ese valor dentro de la función.
*/

#include <stdio.h>

void funcionValor(int a, int b);
void funcionReferencia(int *a, int *b);

int main()
{
    int x = 2, y = 5;
    printf("***Paso de parámetros por valor***\n");
    printf("antes: x = %d, y = %d\n", x, y);
    funcionValor(x, y);
    printf("después: x = %d, y = %d\n", x, y);
    printf("\n");

    printf("***Paso de parámetros por referencia***\n");
    printf("antes: x = %d, y = %d\n", x, y);
    funcionReferencia(&x, &y);
    printf("después: x = %d, y = %d\n", x, y);

    return 0;
}

void funcionValor(int a, int b)
{
    //no puede modificar los valores de x e y
    a = 0;
    b = 0;
    printf("Dentro de funcionValor(): a = %d, b = %d\n", a, b);
    return;
}

void funcionReferencia(int *a, int *b)
{
    //alterará los valores de x e y
    *a = 0;
    *b = 0;
    printf("Dentro de funcionReferencia(): *a = %d, *b = %d\n", *a, *b);
    return;
}
