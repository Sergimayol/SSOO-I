#include <stdio.h>

int contar_caracteres(void);

int main() {
    printf("***Función contar caracteres de stdin hasta EOF***\n");
    int num_car = contar_caracteres();
    printf("\nHas escrito %d caracteres\n", num_car);

    return 0;
}

int contar_caracteres(void) {
    int cont = 0;
    char c;

    c = getchar();
    while (c != EOF) {
        cont++;
        c = getchar();
    }
    return (cont);
}