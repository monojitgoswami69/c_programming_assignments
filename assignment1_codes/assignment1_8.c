// 8. Write a C program to find all roots of a quadratic equation ax^2 + bx + c = 0 for all possible combination of a, b and c.

#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, disc, root1, root2;
    printf("Format of the equation is ax^2 + bx + c = 0\n");
    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    disc = b*b - 4*a*c;
    if(disc > 0) {
        root1 = (-b + sqrt(disc)) / (2*a);
        root2 = (-b - sqrt(disc)) / (2*a);
        printf("Real and Unequal Roots: %.2f, %.2f\n", root1, root2);
    } else if(disc == 0) {
        root1 = -b / (2*a);
        printf("Real and Equal Root: %.2f\n", root1);
    } else {
        float real = -b / (2*a);
        float imag = sqrt(-disc) / (2*a);
        printf("Imaginary Roots: %.2f ± %.2fi\n", real, imag);
    }
    return 0;
}