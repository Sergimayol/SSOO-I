
#include <stdio.h>

int main() {
    int x, *px;

    printf("***Uso de punteros***\n");
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
    return 0;
}