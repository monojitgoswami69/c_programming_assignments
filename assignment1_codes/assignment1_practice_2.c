#include <stdio.h>
#define PI 3.1416
int main() {
    float l, b, r;
    printf("Enter length, breadth and radius: ");
    scanf("%f %f %f", &l, &b, &r);
    printf("Rectangle - Area: %.2f, Perimeter: %.2f\n", l*b, 2*(l+b));
    printf("Circle - Area: %.2f, Circumference: %.2f\n", PI*r*r, 2*PI*r);
    return 0;
}