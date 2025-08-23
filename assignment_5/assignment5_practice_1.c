// 1. Write a C program to calculate the sum of all negative and positive elements in an array.

#include <stdio.h>
int main(){
    int n, i, pos_sum = 0, neg_sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++){
        if (arr[i] > 0){
            pos_sum += arr[i];
        }
        else if (arr[i] < 0){
            neg_sum += arr[i];
        }
    }
    
    printf("Sum of positive elements = %d\n", pos_sum);
    printf("Sum of negative elements = %d\n", neg_sum);
    return 0;
}
