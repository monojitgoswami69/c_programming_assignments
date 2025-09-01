// P2. The length and breadth of a rectangle and radius of a circle are input through keyboard. Write a program to calculate the area and perimeter of the rectangle, and the area and the circumference of the circle

#include <stdio.h>
int main(){
    float l, b, r;
    const float PI = 3.1416;
    printf("Enter length, breadth and radius: ");
    scanf("%f %f %f", &l, &b, &r);
    printf("Rectangle - Area: %.2f, Perimeter: %.2f\n", l*b, 2*(l+b));
    printf("Circle - Area: %.2f, Circumference: %.2f\n", PI*r*r, 2*PI*r);
    return 0;
}