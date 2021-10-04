#include <stdio.h>
#include <stdlib.h>
//#include <time.h>

int *getRandom();
int main() {
    int *p;

    p = getRandom();
    printf("\nValores devueltos por la función\n");
    for (int i = 0; i < 10; i++) {
        printf("*(p+%d) = %d\n", i, *(p + i));
    }
    return 0;
}

int *getRandom() {
    static int r[10];

    srand((unsigned)time(NULL)); // inicializamos la semilla
    printf("Valores generados dentro de la función\n");
    for (int i = 0; i < 10; i++) {
        r[i] = rand();
        printf("r[%d] = %d\n", i, r[i]);
    }
    return r;
}