//2. Write a C program to count number of digits in a number and also their sum and product.

#include <stdio.h>

int main() {
    int num, digits = 0, sum = 0, product = 1, digit;
    printf("Enter a number: ");
    scanf("%d", &num);    
    while (num > 0) {
        digit = num % 10;
        digits++;
        sum += digit;
        product *= digit;
        num /= 10;
    }
    printf("Number of digits: %d\n", digits);
    printf("Sum of digits: %d\n", sum);
    printf("Product of digits: %d\n", product);
    return 0;
}
