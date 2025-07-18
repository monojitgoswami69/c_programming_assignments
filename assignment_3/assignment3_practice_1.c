//1. Write a C program to swap first and last len of a number.

#include <stdio.h>
#include <math.h>
int main() {
    int num, temp, len = 0, first, last;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        len++;
        temp /= 10;
    }
    first = num / pow(10, len-1);
    last = num % 10;
    int multiplier = pow(10, len-1);    
    num%=multiplier;
    num/=10;
    num = last * multiplier + num * 10 + first;
    printf("Number after swapping first and last len: %d\n", num);
    return 0;
}
