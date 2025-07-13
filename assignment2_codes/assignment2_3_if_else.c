#include <stdio.h>
int main() {
    int n;
    float x, y;
    printf("Enter x and n: ");
    scanf("%f %d", &x, &n);
    if(n == 1)
        y = 1 + x*x;
    else if(n == 2)
        y = 1 + x/n;
    else if(n == 3)
        y = 1 + 2*x;
    else
        y = 1 + n*x;
    printf("Y = %.2f", y);
    return 0;
}