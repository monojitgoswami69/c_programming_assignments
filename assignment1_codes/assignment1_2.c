// 2. Write a C program to enter two numbers and perform all arithmetic operations (+, -, *, / and%)

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d x %d = %d\n",a,b,a*b);
    printf("%d / %d = %f\n",a,b,(float)a/b);
    printf("%d %% %d = %d\n",a,b,a%b);
    return 0;
}