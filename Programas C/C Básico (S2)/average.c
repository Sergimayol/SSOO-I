#include <stdio.h>

double getAverage1(int arr[], int size);
double getAverage2(int *arr, int size);
int main() {
    int data[5] = {1000, 2, 3, 17, 50};
    double avg;

    avg = getAverage1(data, 5);
    printf("La media con getAverage1() es: %f\n", avg);
    avg = getAverage2(data, 5);
    printf("La media con getAverage2() es: %f\n", avg);
    return 0;
}

double getAverage1(int arr[], int size) {
    double avg, sum;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    avg = sum / size;
    return avg;
}

double getAverage2(int *arr, int size) {
    double avg, sum;

    for (int i = 0; i < size; i++) {
        sum += *arr++;
    }
    avg = sum / size;
    return avg;
}