// P7. Write a C program to sort the all elements of an array in ascending order using insertion sort technique.

#include <stdio.h>
int main(){
    int n, i, j, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Array before sorting: ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for (i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    
    printf("Array after insertion sort: ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
