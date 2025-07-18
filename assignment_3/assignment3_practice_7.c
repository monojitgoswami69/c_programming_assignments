//7. Write a C program to find value of following series: y = 1 + x^2/2! + x^3/3! + ... + x^n/n!

#include <stdio.h>
int main() {
    int x, n;
    double y = 1.0; 
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    double term = x;  
    for (int i = 2; i <= n; i++) {
        term = term * x / i;  
        y += term;
    }
    printf("Value of the series y = %.6f\n", y);
    return 0;
}
