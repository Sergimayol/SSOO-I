/*
Realiza un programa llamado punteros4.c que muestre los i valores 
del array {100, 101, 102, 103, 104, 105}, (siendo i=0..5), utilizando 
tanto la notación matricial my_array[i] como la aritmética de punteros 
*(ptr + i), habiendo asignado previamente ptr = my_array
Modificar el programa anterior utilizando en el bucle *ptr++ en vez de 
*(ptr + i). Luego sustituirlo por *(++ptr) y observar qué pasa con el valor de ptr.
*/

/*
int *ptr;   //variable de tipo puntero a entero 
int my_array[] = {1, 2, 3, 4};
//inicialización de un array de enteros, se reservará un bloque de memoria consecutiva de 16 bytes 
ptr = &my_array[0]; // ptr apunta al primer elemento del array, equivalente a 
            ptr = my_array; sin embargo NO es correcto my_array = ptr; 
ptr++;      //incrementa la dirección almacenada en ptr en tantas unidades                 
            como bytes ocupe el sizeof() del tipo del objeto apuntado por ptr,
            en este caso apuntará al siguiente entero almacenado en el array 
*(ptr + i)  // indica el contenido de la dirección almacenada en ptr + i, en este         
            caso será el contenido del i-ésimo elemento del array, my_array[i]. ptr no cambia de valor. 
* ptr++     // indica el valor almacenado en la dirección contenida en ptr y luego 
            incrementa esa dirección, o sea el puntero cambia de valor 
* ++ptr     // indica el valor almacenado en la dirección contenida en ptr tras haber                              
            incrementado su dirección, o sea el puntero cambia de valor 
(*ptr)++    // incrementa el valor del contenido almacenado en la dirección contenida en ptr
*/
#include <stdio.h>

int main()
{
    int my_array[] = {100, 101, 102, 103, 104, 105};
    int *ptr;
    ptr = &my_array[0]; // o bien ptr = my_array;
    for (int i = 0; i < 6; i++)
    {
        printf("my_array[%d] = %d", i, my_array[i]);
        printf("\t");
        printf("*(ptr + %d) = %d", i, *(ptr + i));
        printf("\t");
        //probar con *ptr++ y con *(++ptr) y observar qué pasa con el valor de ptr:
        //printf("*ptr++  = %d\t", *ptr++);
        //printf("\t");
        //printf("*(ptr+i)  = %d\t", *(ptr+i));
        //printf("\t");
        printf("ptr = %p\n", ptr);
        printf("\n");
    }
    return 0;
}