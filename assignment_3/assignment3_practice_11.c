// P11. Write a C program to print all Strong numbers between 1 to n.

#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}
int isStrong(int num) {
    int temp = num, sum = 0;   
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return (sum == num);
}
int main() {
    int n;   
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Strong numbers between 1 to %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        if (isStrong(i)) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
