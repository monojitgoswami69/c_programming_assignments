// Write a C program to calculate factorial of a number.

#include <stdio.h>

int main() {
    int n, i;
    int factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) printf("Factorial is not defined for negative numbers.\n");
    else {
        for (i = 1; i <= n; i++) factorial *= i;
        printf("Factorial of %d = %d\n", n, factorial);
    }
    return 0;
}
