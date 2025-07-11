#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, disc, root1, root2;
    scanf("%f %f %f", &a, &b, &c);
    disc = b*b - 4*a*c;
    if(disc > 0) {
        root1 = (-b + sqrt(disc)) / (2*a);
        root2 = (-b - sqrt(disc)) / (2*a);
        printf("Real and Unequal Roots: %.2f, %.2f", root1, root2);
    } else if(disc == 0) {
        root1 = -b / (2*a);
        printf("Real and Equal Root: %.2f", root1);
    } else {
        float real = -b / (2*a);
        float imag = sqrt(-disc) / (2*a);
        printf("Imaginary Roots: %.2f ± %.2fi", real, imag);
    }
    return 0;
}