// P4. Write a C program to find maximum between two numbers using switch case.

#include <stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    switch(a > b){
        case 1: printf("Max = %d\n", a); break;
        case 0: printf("Max = %d\n", b); break;
    }
    return 0;
}