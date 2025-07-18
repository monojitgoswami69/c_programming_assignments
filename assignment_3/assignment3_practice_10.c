//10. Write a C program to print all Perfect numbers between 1 to n.

#include <stdio.h>
int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) sum += i;
    }
    return (sum == num);
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Perfect numbers between 1 to %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        if (isPerfect(i)) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
