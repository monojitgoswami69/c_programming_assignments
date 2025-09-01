// P12. Write a C program to find value of cos series.

#include <stdio.h>
int main() {
    double x, cos = 1.0;
    int n;   
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    double term = 1.0;  
    for (int i = 1; i < n; i++) {
        term = term * (-x * x) / ((2 * i - 1) * (2 * i));
        cos += term;   
    }
    printf("Value of cos(%.2f) = %.6f\n", x, cos);
    return 0;
}