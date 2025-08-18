/*
Write a C program for the following pattern
D C B A
  C B A
    B A
      A
*/

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    char start = 'A' + n - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        for (char ch = start - i; ch >= 'A'; ch--) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}