/* 
Write a C program for the following pattern
A           A
A B       B A
A B C   C B A
A B C D C B A
*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    char ch = 'A';
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < i; j++){
            printf("%c ", ch + j);
        }
        int gap = 2 * (n - i) - 1; 
        for (int j = 0; j < gap; j++){
            printf("  ");
        }
        int start = (gap <= 0) ? i - 2 : i - 1;
        for (int j = start; j >= 0; j--){
            if (j >= 0) printf("%c ", ch + j);
        }
        printf("\n");
    }
}