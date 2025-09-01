// P5. Write a C program to print all odd and even numbers between 1 to n and also print their sum.

#include <stdio.h>
int main() {
    int n, osum = 0, esum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Odd numbers between 1 to %d: ", n);
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
        osum+=i;
    }
    printf("\n\nEven numbers between 1 to %d: ", n);
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
        esum+=i;
    }
    printf("\n\nSum of odd numbers: %d\n", osum);
    printf("Sum of even numbers: %d", esum);
    return 0;
}
