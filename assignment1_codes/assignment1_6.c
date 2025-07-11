// 6. Write a C program to check whether a number is even or odd using if-else statement.

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n % 2 == 0) printf("Even\n");
    else printf("Odd\n");
    return 0;
}