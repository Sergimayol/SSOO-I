#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char my_string1[5];
    /*si hacemos la inicialización elemento a elemento
    es preciso indicar la dimensión del array en la declaración */
    my_string1[0] = 'h';
    my_string1[1] = 'o';
    my_string1[2] = 'l';
    my_string1[3] = 'a';
    my_string1[4] = '\0';
    printf("char my_string1[5];\nmy_string1[0] = 'h';\n...\nmy_string1[4] = \'\\0\';\n");
    printf("Cadena: %s\n", my_string1);
    printf("strlen(my_string1): %lu\n", strlen(my_string1));
    printf("sizeof(my_string1): %lu\n\n", sizeof(my_string1));

    char my_string2[] = {'h', 'o', 'l', 'a', '\0'};
    /* no es necesario indicar la dimensión del array */
    printf("char my_string2[] = {'h', 'o', 'l', 'a', \'\\0\'};\n");
    printf("Cadena: %s\n", my_string2);
    printf("strlen(my_string2): %lu\n", strlen(my_string2));
    printf("sizeof(my_string2): %lu\n\n", sizeof(my_string2));

    char my_string3[] = "hola";
    /* automáticamente se incorporará '\0' al final de la secuencia */
    printf("char my_string3[] = \"hola\";\n");
    printf("Cadena: %s\n", my_string3);
    printf("strlen(my_string3): %lu\n", strlen(my_string3));
    printf("sizeof(my_string3): %lu\n\n", sizeof(my_string3));

    char *my_string4 = "hola";
    /* automáticamente se incorporará '\0' al final de la secuencia */
    printf("char *my_string4 = \"hola\";\n");
    printf("Cadena: %s\n", my_string4);
    printf("strlen(my_string4): %lu\n", strlen(my_string4));
    printf("sizeof(my_string4): %lu, tamaño del puntero, o sea de la dirección\n", sizeof(my_string4));
    printf("sizeof(*my_string4): %lu, tamaño del tipo de la variable a la que apunta\n\n", sizeof(*my_string4));

    char *my_string5;
    my_string5 = malloc(5 * sizeof(char));
    strcpy(my_string5, "hola"); // no se puede my_string5="hola";
    printf("char *my_string5;\nmy_string5 = malloc(5 * sizeof(char));\nstrcpy(my_string5, \"hola\");\n");
    printf("Cadena: %s\n", my_string5);
    printf("strlen(my_string5): %lu\n", strlen(my_string5));
    printf("sizeof(my_string5): %lu, tamaño del puntero, o sea de la dirección\n", sizeof(my_string5));
    printf("sizeof(*my_string5): %lu, tamaño del tipo de la variable a la que apunta\n\n", sizeof(*my_string5));
    free(my_string5);

    return 0;
}