/*
Realiza un programa que contenga dos funciones que calculen la media 
de los valores {1000, 2, 3, 17, 50} pasados como argumento, en una como 
vector de tamaño indeterminado y en otra como puntero:
    - double getAverage1(int arr[ ], int size);
    - double getAverage2(int *arr, int size);

Para pasar un vector como argumento en una función hay que declarar un parámetro formal 
de una de las siguientes 3 maneras en el prototipo de la función:
Como puntero: void my_function (int *param) {...}
Como vector de un tamaño concreto: void my_function (int param[10]) {...}
Como vector de tamaño indeterminado: void my_function (int param[ ]) {...}

En cualquiera de los casos el parámetro actual (el que se utiliza en la llamada a la función) será param:

my_function (param); 

Observación: los vectores siempre se pasan automáticamente como argumentos por referencia ya que pasamos la dirección.
*/

#include <stdio.h>

double getAverage1(int arr[], int size);
double getAverage2(int *arr, int size);

int main()
{
    int data[5] = {1000, 2, 3, 17, 50};
    double avg;
    avg = getAverage1(data, 5);
    printf("La media con double getAverage1(int arr[], int size) es: %f\n", avg);
    avg = getAverage2(data, 5);
    printf("La media con double getAverage2(int *arr, int size) es: %f\n", avg);

    return 0;
}

double getAverage1(int arr[], int size)
{
    double media = 0;
    for (int i = 0; i < size; i++)
    {
        media = media + arr[i];
    }

    return media / size;
}

double getAverage2(int *arr, int size)
{
    double media = 0;
    for (int i = 0; i < size; i++)
    {
        media = media + *arr++;
    }
    
    return media / size;
}