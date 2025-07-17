//10. Write a C program to check whether a number is Strong number or not.

#include <stdio.h>
int main() {
    int num, temp, digit, sum = 0, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (num > 0) {
        digit = num % 10;
        fact = 1;
        for (int i = 1; i <= digit; i++) fact *= i;
        sum += fact;
        num /= 10;
    }
    if (sum == temp) printf("%d is a strong number.\n", temp);
    else printf("%d is not a strong number.\n", temp);
    return 0;
}
