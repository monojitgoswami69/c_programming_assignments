// P3. Write a C program to find area of a triangle Area of triangle using Heron's formula

#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, s, area;
    printf("Enter the three sides: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a + b <= c || b + c <= a || a + c <= b) {
        printf("Error: The given sides do not form a valid triangle.\n");
        return 1;
    }
    s = (a + b + c) / 2;
    area = sqrt(s*(s - a)*(s - b)*(s - c));
    printf("Area of triangle = %.2f\n", area);
    return 0;
}