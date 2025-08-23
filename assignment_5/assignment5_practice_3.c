// 3. Write a C program to find the second largest element from an array (without sorting).

#include <stdio.h>
int main(){
    int n, i, first, second;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n < 2){
        printf("Array should have at least 2 elements\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    first = second = arr[0];
    
    for (i = 1; i < n; i++){
        if (arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first){
            second = arr[i];
        }
    }
    
    if (first == second){
        printf("No second largest element found (all elements are same)\n");
    }
    else {
        printf("Second largest element = %d\n", second);
    }
    return 0;
}
