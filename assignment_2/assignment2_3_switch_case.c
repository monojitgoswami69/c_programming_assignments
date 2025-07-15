/* 3. Write a C program to calculate the value of 𝑌 using:
y(x,n) 
= {1 + x^2 when n = 1
= {1 + x/n when n = 2
= {1 + 2*x when n = 3
= {1 + n*x when n>3 or n<1
USING SWITCH-CASE
*/

#include <stdio.h>
int main(){
    int n;
    float x, y;
    printf("Enter x and n: ");
    scanf("%f %d", &x, &n);
    switch(n){
        case 1: y = 1 + x*x; break;
        case 2: y = 1 + x/n; break;
        case 3: y = 1 + 2*x; break;
        default: y = 1 + n*x;
    }
    printf("Y = %.2f\n", y);
    return 0;
}