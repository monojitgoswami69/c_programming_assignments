/*
5.  Write a C program to print the following pascal triangle 
      1 
    1   1 
  1   2   1 
1   3   3   1 (Up to n numbers of row) 
*/
 
//# Logic: Each element C(i,j) = C(i,j-1) * (i - j + 1) / j with C(i,0)=1
#include <stdio.h>

int main(void) {
  int n;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int space = 0; space <= n - i; space++) {
      printf("  "); 
    }
    int coef = 1; 
    for (int j = 0; j <= i; j++) {
      if (j > 0) {
        coef = coef * (i - j + 1) / j;
      }
      printf("%4d", coef); 
    }
    printf("\n");
  }
  return 0;
}

