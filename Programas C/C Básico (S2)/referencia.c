#include <stdio.h>

void funcionValor(int a, int b);        /*prototipo*/
void funcionReferencia(int *a, int *b); /*prototipo*/

int main() {
    int x = 2;
    int y = 5;

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

void funcionValor(int a, int b) {
    a = 0;
    b = 0;

    printf("Dentro de funcionValor(): a = %d, b = %d\n", a, b);
    return;
}

void funcionReferencia(int *a, int *b) {
    *a = 0;
    *b = 0;

    printf("Dentro de funcionReferencia(): *a = %d, *b = %d\n", *a, *b);
    return;
}
