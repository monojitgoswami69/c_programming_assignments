// P10. Write a C program to left rotate and right rotate an array. 
#include <stdio.h>

void leftRotate(int arr[], int d, int n) {
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[i] = arr[(i + d) % n];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

void rightRotate(int arr[], int d, int n) {
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[i] = arr[(i - d + n) % n];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int  n, d;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &d);

    leftRotate(arr, d, n);
    printf("Left rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rightRotate(arr, d, n);
    printf("Right rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}