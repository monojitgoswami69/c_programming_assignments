// Write a C program to check whether a number is Prime number or not.

#include <stdio.h>

int main() {
    int n, i, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) flag = 0; 
    else{
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }
    }
    if (flag) printf("%d is a prime number.\n", n);
    else printf("%d is not a prime number.\n", n);  
    return 0;
}
