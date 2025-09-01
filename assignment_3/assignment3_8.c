// 8. Write a C program to check whether a number is Armstrong number or not.

#include <stdio.h>
#include <math.h>
int main() {
    int num, temp, rem, res = 0, len = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0){
        temp /= 10;
        len++;
    }
    temp = num;
    while (temp != 0){
        rem = temp % 10;
        res += pow(rem, len);
        temp /= 10;
    }
    if (res == num) printf("%d is an Armstrong number.\n", num);
    else printf("%d is not an Armstrong number.\n", num);
    return 0;
}
