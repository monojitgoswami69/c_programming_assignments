// P9. Write a C program to print all Armstrong numbers between 1 to n.

#include <stdio.h>
#include <math.h>
int countDigits(int num) {
    int count = 0;
    while (num > 0){
        count++; 
        num /= 10;
    }
    return count;
}
int isArmstrong(int num) {
    int temp = num, sum = 0, digits;
    digits = countDigits(num);
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return (sum == num);
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Armstrong numbers between 1 to %d are:\n", n);
    for (int i = 1; i <= n; i++) if (isArmstrong(i)) printf("%d ", i);
    printf("\n");
    return 0;
}
