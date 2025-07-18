// 2. Write a C program to enter two numbers and perform all arithmetic operations (+, -, *, / and %)

#include <stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d x %d = %d\n", a, b, a * b);
    if(b != 0) {
        printf("%d / %d = %.6f\n", a, b, (float)a / b);
        printf("%d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Division by zero is undefined.\n");
        printf("Modulus by zero is undefined.\n");
    }
    return 0;
}