/*
Write a C program for the following pattern
1 0 1
0 1 0
1 0 1
*/

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int temp;
    for (int i = 1; i <= n; i++) {
        temp = i % 2;
        for (int j = 1; j <= 3; j++) {
            printf("%d ", (temp++ % 2));
        }
        printf("\n");
    }
    return 0;
}
