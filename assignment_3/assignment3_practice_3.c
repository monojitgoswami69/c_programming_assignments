//3. Write a C program to print multiplication table of any number.

#include <stdio.h>

int main() {
    int num, range;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the range for multiplication table: ");
    scanf("%d", &range);
    printf("\nMultiplication table of %d:\n", num);
    printf("-------------------------\n");
    for (int i = 1; i <= range; i++) printf("%d x %d = %d\n", num, i, num * i);
    return 0;
}
