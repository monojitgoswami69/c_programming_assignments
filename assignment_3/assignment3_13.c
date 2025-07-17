//13. Write a C program to find value of sin series 

#include <stdio.h>
#include <math.h>
int main() {
    double x, term, sum = 0.0;
    int n, i, sign = 1;
    float factorial = 1;
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        int exponent = 2*i-1;
        if (i == 1) factorial = 1;
        else factorial *= (2*i-2) * (2*i-1);
        printf("%f ",factorial);
        term = sign * pow(x, exponent) / factorial;
        sum += term;
        sign *= -1;
    }
    printf("Value of sin series: %f", sum);
    return 0;
}
