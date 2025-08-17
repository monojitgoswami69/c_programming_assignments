/*
3. Write a C program to print the following pattern: 
      1 
     2 3 
    3 4 5 
   4 5 6 7 (Up to n numbers of row.)
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n - i; k++) {
            printf(" ");
        }
        for (int j = i; j < 2*i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
