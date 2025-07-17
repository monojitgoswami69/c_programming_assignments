// Write a C program to print Fibonacci series up to n terms.

#include <stdio.h>
int main() {
    int n, i, a = 0, b = 1, c;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series up to %d terms:\n", n);
    if (n >= 1) printf("%d ", a);
    if (n >= 2) printf("%d ", b);
    for (i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b; b = c;
    }
    printf("\n");
    return 0;
}
