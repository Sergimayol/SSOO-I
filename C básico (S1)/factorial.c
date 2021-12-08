#include <stdio.h>

long int factorial(int n);

int main() {
    int n;

    printf("***Cálculo del factorial de un número***\n");
    printf("Introduce un número: ");
    scanf("%d", &n);
    printf("%d! = %ld\n", n, factorial(n));

    return 0;
}

long int factorial(int n) {
    if (n < 1)
        return 1;
    else
        return (n * factorial(n - 1));
}