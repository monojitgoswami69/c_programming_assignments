// Write a C program to find value of following series: y = 1 + 1/2 + 1/3 + ... + 1/n

#include <stdio.h>
int main() {
    int n, i;
    float sum = 0.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) sum += 1.0 / i;
    printf("Sum of series = %.6f\n", sum);
    return 0;
}
