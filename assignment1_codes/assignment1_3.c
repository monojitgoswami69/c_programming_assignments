//3. Write a C program to enter length and breadth of a rectangle and radius of a circle. Find perimeter and area of rectangle and circumference and area of circle.

#include <stdio.h>
int main() {
    float l, b, r;
    const float PI = 3.1416;
    printf("Enter length, breadth and radius: ");
    scanf("%f %f %f", &l, &b, &r);
    printf("Rectangle - Area: %.2f, Perimeter: %.2f\n", l*b, 2*(l+b));
    printf("Circle - Area: %.2f, Circumference: %.2f\n", PI*r*r, 2*PI*r);
    return 0;
}