/*
Write a C program for the following pattern
15 14 13 12 11
10 9 8 7
6 5 4
3 2 
1
*/

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int num = n * (n + 1) / 2;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            printf("%d ", num);
            num--;
        }
        printf("\n");
    }
    return 0;
}