#include <stdio.h>
int main() {
    int my_array[] = {100, 101, 102, 103, 104, 105};
    int *ptr;
    ptr = &my_array[0]; // o bien ptr = my_array;

    for (int i = 0; i < 6; i++) {
        printf("my_array[%d] = %d\t", i, my_array[i]);
        printf("*(ptr+i)  = %d\t", *(ptr+i)); 
        //probar con *ptr++ y con *(++ptr) y observar qué pasa con el valor de ptr:
        //printf("*ptr++  = %d\t", *ptr++);
        //printf("*(ptr+i)  = %d\t", *(ptr+i));
        printf("ptr = %p\n", ptr);
    }
    return 0;
}