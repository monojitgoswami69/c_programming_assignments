/*
4. Write a C program to print digits in following pyramidal form: 
      1 
    2 3 2 
  3 4 5 4 3 
4 5 6 7 6 5 4 (Up to n numbers of rows) 
*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n - i; k++) {
            printf("  ");
        }
        for (int j = i; j < 2*i; j++) {
            printf("%d ", j);
        }
        for (int j = 2*(i-1); j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
