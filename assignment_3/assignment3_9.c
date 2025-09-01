// 9. Write a C program to check whether a number is Perfect number or not.

#include <stdio.h>
int main() {
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("%d is not a perfect number.\n", num);
        return 0;
    }
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) printf("%d is a perfect number.\n", num);
    else printf("%d is not a perfect number.\n", num);
    return 0;
}
