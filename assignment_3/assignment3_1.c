// Write a C program to print natural numbers from 1 to n and also print their sum.

#include <stdio.h>
int main(){
    int n, i, s = 0;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    if (n <= 0){
        printf("Please enter a positive integer.\n");
        return 1;
    }
    printf("Natural numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++){
        printf("%d ", i);
        s += i;
    }
    printf("\nSum of natural numbers from 1 to %d = %d\n", n, s);
    return 0;
}