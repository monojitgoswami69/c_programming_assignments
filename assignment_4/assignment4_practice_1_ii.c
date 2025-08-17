/* 1. Write a C program for the following pattern
D D D D
  C C C
    B B
      A
*/

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    char ch = 'A' + n - 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            printf("  ");
        }
        for (int k = 1; k <= n - i + 1; k++) {
            printf("%c ", ch);
        }
        printf("\n");
        ch--;
    }
    return 0;
}
