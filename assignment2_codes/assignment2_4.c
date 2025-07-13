// 4. Write a C program to find maximum between three numbers using logical operator and ternary operator.

#include <stdio.h>
int main(){
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max = (a>b&&a>c)?a:(b>c?b:c);
    // alternate approach: max = (a>b)?(a>c:a:c):(b>c:b:c)
    printf("Max = %d\n", max);
    return 0;
}