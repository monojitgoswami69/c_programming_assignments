// P6. Write a C program to find all prime factors of a number.

#include <stdio.h>

// Simple function to check if a number is prime
int checkPrime(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Prime factors of %d are: ", num);
    for (int i = 2; i <= num; i++) {
        if (num % i == 0 && checkPrime(i)) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
