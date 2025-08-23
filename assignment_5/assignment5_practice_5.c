// 5. Write a C program to search the any elements from an array using binary search technique.

#include <stdio.h>
int main(){
    int n, i, j, element, low, high, mid, found = 0, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    printf("Sorted array: ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Enter element to search: ");
    scanf("%d", &element);
    
    low = 0;
    high = n - 1;
    
    while (low <= high){
        mid = (low + high) / 2;
        if (arr[mid] == element){
            printf("Element %d found at position %d\n", element, mid + 1);
            found = 1;
            break;
        }
        else if (arr[mid] < element){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    
    if (!found){
        printf("Element %d not found in the array\n", element);
    }
    return 0;
}
