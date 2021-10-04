#include <stdio.h>

int maximo(int a, int b);

int main() {
    int x, y;
    int max;

    printf("***Función máximo de dos números enteros***\n");
    printf("Introduce dos números: \n");
    scanf("%d %d", &x, &y);
    max = maximo(x, y);
    printf("max(%d,%d)=%d\n", x, y, max);

    return 0;
}

int maximo(int a, int b) {
    int max;
    if (a > b)
        max = a;
    else
        max = b;
    return (max);
}