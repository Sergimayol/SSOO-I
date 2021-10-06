/*
Realiza un programa que utilice diferentes formas de declaraciones 
con inicialización de cadenas (strings), y que muestre por pantalla 
sus valores, su longitud y su tamaño.

Una cadena en C es un vector de caracteres terminado con el caracter nulo ‘\0’.
Formas alternativas de inicialización en la declaración:
char my_string[5] = “hola”;    //o  char my_string[ ] = “hola”; 
El compilador asigna un bloque contiguo de memoria de 5 bytes y lo inicializa con los caracteres hola\0      
char my_string[ ] = {'h', 'o', 'l’, 'a', '\0'};  // o char my_string[ ] = {'h', 'o', 'l’, 'a', 0}; 

Formas alternativas de asignación de valores tras la declaración:
Componente a componente:

char my_string[5];
...
my_string[0] = 'h';
my_string[1] = 'o';
my_string[2] = 'l';
             my_string[3] = 'a';
             my_string[4] = '\0';  // o bien my_string[4] = 0; 
/* Si no se realiza esta última asignación, el compilador automáticamente añadirá el carácter de fin de cadena,
pero igualmente hay que reservarle espacio de memoria 

Mediante la función strcpy():

char my_string[5];
strcpy(my_string, “hola”);

/* NO está permitida la asignación my_string = “hola”; . Recordemos que my_string es el nombre del vector y apunta a la dirección de la posición 0 del mismo.
Tampoco está permitido realizar lo siguiente:
   char my_string[5];
   my_string[ ] = "hola"; 

En vez de utilizar la notación matricial para las cadenas podríamos usar punteros. 

Formas de inicialización en la declaración:
char *p_my_string = “hola”;
char *p_my_string2 = p_my_string;  //asignándole la dirección de otro puntero

Formas de asignación de valores tras la declaración:
char *p_my_string;
char my_string[ ] = "hola"; 
p_my_string = my_string;  //apuntará al primer elemento del vector

Mediante la función strcpy(), previa reserva de espacio para el contenido de la dirección que va a almacenar 
p_my_string, utilizando la función malloc(), y que posteriormente se liberará con la función free():

char *p_my_string;  
/* reserva espacio para el puntero p_my_string, pero no para el contenido de la dirección que apunta 
 …
p_my_string = malloc(5 * sizeof(char));   
/* reserva un bloque de memoria consecutivo del tamaño de 5 caracteres.                                                                             
             Hay que comprobar que no devuelve NULL                                                             
strcpy(p_my_string, "hola");    // NO se puede p_my_string = "hola"; !!!
…
free(p_my_string);
La función strlen() de la librería <string.h> devuelve la longitud de una cadena (sin contar ‘\0’).
El operador sizeof() devuelve lo que ocupa en memoria la variable indicada:
   int a = 7;                                                /* sizeof(a) = 4 
   unsigned int b;                                     /* sizeof(b) = 4 
   double c;                                               /* sizeof(c) = 8 
   int array_int[ ] = {0, 1, 2, 3};                 /* sizeof(array_int) = 16 
   char array_char[ ] = {'a', 'b', 'c', '\0'};   /* sizeof(array_char) = 4
   int *ptr_int;                                           /* sizeof(ptr_int) = 8, da igual el tipo de datos al que 
                                                                 apunte, es el tamaño de la dirección.
                                                                 En cambio sizeof(*ptr_int) = 4 
   char *ptr_char;                                   /* sizeof(ptr_char) = 8, idem que el anterior.                       
                                                                 En cambio sizeof(*ptr_char) = 1 
Para imprimir la cadena, tanto si está declarada como vector o como puntero, empleamos sólo el nombre y el formato %s:
   char my_string1[5] = “hola”;    
   char *my_string2 = “adios”;
   printf("%s, %s\n",my_string1, my_string2);
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char my_string1[5];
    /*si hacemos la inicialización elemento a elemento
    es preciso indicar la dimensión del array en la declaración */
    my_string1[0] = 'h';
    my_string1[1] = 'o';
    my_string1[2] = 'l';
    my_string1[3] = 'a';
    my_string1[4] = '\0';
    for (int i = 0; i < strlen(my_string1); i++)
    {
        printf("my_string1[%d] = %d\t", i, my_string1[i]);
    }
    printf("\nCadena: %s\n", my_string1);
    printf("strlen(my_string1): %lu\n", strlen(my_string1));
    printf("sizeof(my_string1): %lu\n\n", sizeof(my_string1));

    //----------------------------------------------------------------//

    char my_string2[] = {'h', 'o', 'l', 'a', '\0'};
    /* no es necesario indicar la dimensión del array */
    for (int i = 0; i < strlen(my_string2); i++)
    {
        printf("my_string2[%d] = %d\t", i, my_string2[i]);
    }
    printf("\nchar my_string2[] = {'h', 'o', 'l', 'a', \'\\0\'};\n");
    printf("Cadena: %s\n", my_string2);
    printf("strlen(my_string2): %lu\n", strlen(my_string2));
    printf("sizeof(my_string2): %lu\n\n", sizeof(my_string2));

    //-------------------------------------------------------------//

    char my_string3[] = "hola";
    /* automáticamente se incorporará '\0' al final de la secuencia */
    printf("char my_string3[] = \"hola\";\n");
    printf("Cadena: %s\n", my_string3);
    printf("strlen(my_string3): %lu\n", strlen(my_string3));
    printf("sizeof(my_string3): %lu\n\n", sizeof(my_string3));

    //-------------------------------------------------------------//

    char *my_string4 = "hola";
    /* automáticamente se incorporará '\0' al final de la secuencia */
    printf("char *my_string4 = \"hola\";\n");
    printf("Cadena: %s\n", my_string4);
    printf("strlen(my_string4): %lu\n", strlen(my_string4));
    printf("sizeof(my_string4): %lu, tamaño del puntero, o sea de la dirección\n", sizeof(my_string4));
    printf("sizeof(*my_string4): %lu, tamaño del tipo de la variable a la que apunta\n\n", sizeof(*my_string4));

    //-------------------------------------------------------------//

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