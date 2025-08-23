// 2. Write a C program to insert and delete an element from the any position of an array.

#include <stdio.h>
int main(){
    int n, i, choice, pos, element;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n + 1]; 
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("1. Insert element\n2. Delete element\nEnter your choice: ");
    scanf("%d", &choice);
    
    if (choice == 1){
        printf("Enter element to insert: ");
        scanf("%d", &element);
        printf("Enter position (1 to %d): ", n + 1);
        scanf("%d", &pos);
        if (pos >= 1 && pos <= n + 1){
            for (i = n; i >= pos; i--){
                arr[i] = arr[i - 1];
            }
            arr[pos - 1] = element;
            n++;
            printf("Array after insertion: ");
            for (i = 0; i < n; i++){
                printf("%d ", arr[i]);
            }
            printf("\n");
        } 
        else {
            printf("Invalid position!\n");
        }
    } 
    else if (choice == 2){
        printf("Enter position to delete (1 to %d): ", n);
        scanf("%d", &pos);
        if (pos >= 1 && pos <= n){
            for (i = pos - 1; i < n - 1; i++){
                arr[i] = arr[i + 1];
            }
            n--;
            printf("Array after deletion: ");
            for (i = 0; i < n; i++){
                printf("%d ", arr[i]);
            }
            printf("\n");
        } 
        else {
            printf("Invalid position!\n");
        }
    } 
    else {
        printf("Invalid choice!\n");
    }
    return 0;
}
