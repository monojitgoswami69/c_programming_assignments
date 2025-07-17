// Write a C program to find all factors of a number.

#include <stdio.h>
int main() {
    int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);    
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
