// 2. Write a C program to check whether a number is palindrome or not.

#include <stdio.h>
int main() {
    int num, temp, rev = 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &num);
    temp = num;
    if (num < 0) {
        printf("%d is not a palindrome.\n", num);
        return 0;
    }
    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if (temp == rev) printf("%d is a palindrome.\n", temp);
    else printf("%d is not a palindrome.\n", temp);
    return 0;
}