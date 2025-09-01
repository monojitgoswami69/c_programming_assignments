// P13. Write a C program to print Fibonacci series within a certain range.

#include <stdio.h>
int main() {
    int start, end, a = 0, b = 1, c;
    printf("Enter the starting range: ");
    scanf("%d", &start);
    printf("Enter the ending range: ");
    scanf("%d", &end);
    printf("Fibonacci series between %d and %d:\n", start, end);
    if (a >= start && a <= end) printf("%d ", a);
    if (b >= start && b <= end) printf("%d ", b);
    c = a + b;
    while (c <= end) {
        if (c >= start) printf("%d ", c);
        a = b;
        b = c;
        c = a + b;
    }
    printf("\n");
    return 0;
}
