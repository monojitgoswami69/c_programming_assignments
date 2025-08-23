// 5. Write a C program to search the any elements from an array using linear search technique.

#include <stdio.h>
int main(){
    int n, i, element, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &element);
    
    for (i = 0; i < n; i++){
        if (arr[i] == element){
            printf("Element %d found at position %d\n", element, i + 1);
            found = 1;
            break;
        }
    }
    
    if (!found){
        printf("Element %d not found in the array\n", element);
    }
    return 0;
}
