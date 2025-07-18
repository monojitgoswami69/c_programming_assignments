// 5. Write a C program to find maximum between three numbers using nested if-else.

#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    // using ternary(one liner) -> max = a>b?(a>c?a:c):b>c?b:c;
    if(a > b) {
        if(a > c) printf("Max = %d\n", a);
        else printf("Max = %d\n", c);
    } else {
        if(b > c) printf("Max = %d\n", b);
        else printf("Max = %d\n", c);
    }
    return 0; 
}