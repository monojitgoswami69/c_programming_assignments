<h1 align="center">ASSIGNMENT - 5</h1>

<div align="center" id="index">
  <h2> Table of Contents</h2>
</div>

<div align="center">

|  **Assignment Programs** |  **Practice Problems** |
|---|---|
| [**#1** Sum of Array Elements](#assignment1) | [**#1** Sum of Positive and Negative Elements](#practice1) |
| [**#2** Insert and Delete Array Elements](#assignment2) | [**#2** Find Maximum and Minimum Elements](#practice2) |
| [**#3** Bubble Sort](#assignment3) | [**#3** Find Second Largest Element](#practice3) |
| [**#4** Selection Sort](#assignment4) | [**#4** Mean, Variance, Standard Deviation](#practice4) |
| [**#5** Linear Search](#assignment5) | [**#5** Binary Search](#practice5) |
|  | [**#6** Modified Bubble Sort](#practice6) |
|  | [**#7** Insertion Sort](#practice7) |
|  | [**#8** Element Frequency Counter](#practice8) |
|  | [**#9** Remove Duplicate Elements](#practice9) |

</div>

> ### **Note** - All programs include algorithms, source code, and sample outputs

<hr>

<h1 align="center">Assignment Programs</h1>

<a id="assignment1"></a>
## 1. Write a C program to find the sum of all elements of an array.

### Algorithm
1. START
2. Prompt the user to enter the number of elements `n`
3. Declare an array of size `n`
4. Read `n` elements into the array
5. Initialize sum = 0
6. For each element in the array, add it to sum
7. Display the sum
8. STOP

### Source Code
```c
#include <stdio.h>
int main(){
    int n, i, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++){
        sum += arr[i];
    }
    printf("Sum of all elements = %d\n", sum);
    return 0;
}
```

### Sample Output
```text
Enter the number of elements: 5
Enter 5 elements: 10 20 30 40 50
Sum of all elements = 150

Enter the number of elements: 4
Enter 4 elements: -5 15 -10 25
Sum of all elements = 25

Enter the number of elements: 3
Enter 3 elements: 0 0 0
Sum of all elements = 0
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="assignment2"></a>
## 2. Write a C program to insert and delete an element from the any position of an array.

### Algorithm
1. START
2. Prompt the user to enter the number of elements `n`
3. Read `n` elements into the array
4. Display menu: 1-Insert, 2-Delete
5. If Insert:
   - Read element and position
   - Shift elements right from position
   - Insert element at position
6. If Delete:
   - Read position to delete
   - Shift elements left from position
7. Display the modified array
8. STOP

### Source Code
```c
#include <stdio.h>
int main(){
    int n, i, choice, pos, element;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n + 1]; // Extra space for insertion
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
        } else {
            printf("Invalid position!\n");
        }
    } else if (choice == 2){
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
        } else {
            printf("Invalid position!\n");
        }
    } else {
        printf("Invalid choice!\n");
    }
    return 0;
}
```

### Sample Output
```text
Enter the number of elements: 4
Enter 4 elements: 10 20 30 40
1. Insert element
2. Delete element
Enter your choice: 1
Enter element to insert: 25
Enter position (1 to 5): 3
Array after insertion: 10 20 25 30 40

Enter the number of elements: 5
Enter 5 elements: 10 20 30 40 50
1. Insert element
2. Delete element
Enter your choice: 2
Enter position to delete (1 to 5): 3
Array after deletion: 10 20 40 50
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="assignment3"></a>
## 3. Write a C program to sort the all elements of an array in ascending order using bubble sort technique.

### Algorithm
1. START
2. Read the number of elements `n` and array elements
3. Display the array before sorting
4. Bubble Sort:
   - For i = 0 to n-2:
     - For j = 0 to n-i-2:
       - If arr[j] > arr[j+1], swap them
5. Display the sorted array
6. STOP

### Source Code
```c
#include <stdio.h>
int main(){
    int n, i, j, temp;
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
    
    // Bubble sort
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    printf("Array after sorting (ascending): ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
```

### Sample Output
```text
Enter the number of elements: 5
Enter 5 elements: 64 34 25 12 22
Array before sorting: 64 34 25 12 22
Array after sorting (ascending): 12 22 25 34 64

Enter the number of elements: 6
Enter 6 elements: 5 2 8 1 9 3
Array before sorting: 5 2 8 1 9 3
Array after sorting (ascending): 1 2 3 5 8 9
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="assignment4"></a>
## 4. Write a C program to sort the all elements of an array in ascending order using selection sort technique.

### Algorithm
1. START
2. Read the number of elements `n` and array elements
3. Display the array before sorting
4. Selection Sort:
   - For i = 0 to n-2:
     - Find minimum element from i to n-1
     - Swap minimum element with arr[i]
5. Display the sorted array
6. STOP

### Source Code
```c
#include <stdio.h>
int main(){
    int n, i, j, min_idx, temp;
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
    
    // Selection sort
    for (i = 0; i < n - 1; i++){
        min_idx = i;
        for (j = i + 1; j < n; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    
    printf("Array after sorting (ascending): ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
```

### Sample Output
```text
Enter the number of elements: 5
Enter 5 elements: 64 25 12 22 11
Array before sorting: 64 25 12 22 11
Array after sorting (ascending): 11 12 22 25 64

Enter the number of elements: 4
Enter 4 elements: 29 10 14 37
Array before sorting: 29 10 14 37
Array after sorting (ascending): 10 14 29 37
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="assignment5"></a>
## 5. Write a C program to search the any elements from an array using linear search technique.

### Algorithm
1. START
2. Read the number of elements `n` and array elements
3. Read the element to search
4. Linear Search:
   - For i = 0 to n-1:
     - If arr[i] equals search element:
       - Display found at position i+1
       - Exit
5. If not found, display "not found"
6. STOP

### Source Code
```c
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
    
    // Linear search
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
```

### Sample Output
```text
Enter the number of elements: 5
Enter 5 elements: 10 25 30 40 50
Enter element to search: 30
Element 30 found at position 3

Enter the number of elements: 6
Enter 6 elements: 5 12 8 3 15 9
Enter element to search: 7
Element 7 not found in the array

Enter the number of elements: 4
Enter 4 elements: 100 200 300 400
Enter element to search: 200
Element 200 found at position 2
```
<div align="right"><a href="#index">return to index</a></div><hr>

<h1 align="center">Practice Problems</h1>

<a id="practice1"></a>
## 1. Write a C program to calculate the sum of all negative and positive elements in an array.

### Algorithm
1. START
2. Read the number of elements `n` and array elements
3. Initialize pos_sum = 0, neg_sum = 0
4. For each element in array:
   - If element > 0, add to pos_sum
   - If element < 0, add to neg_sum
5. Display both sums
6. STOP

### Source Code
```c
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
```

### Sample Output
```text
Enter the number of elements: 6
Enter 6 elements: 10 -5 20 -15 30 -8
Sum of positive elements = 60
Sum of negative elements = -28

Enter the number of elements: 5
Enter 5 elements: -2 -4 -6 -8 -10
Sum of positive elements = 0
Sum of negative elements = -30

Enter the number of elements: 4
Enter 4 elements: 5 10 15 20
Sum of positive elements = 50
Sum of negative elements = 0
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practice2"></a>
## 2. Write a C program to find maximum and minimum element in an array (without sorting).

### Algorithm
1. START
2. Read the number of elements `n` and array elements
3. Initialize max = arr[0], min = arr[0]
4. For i = 1 to n-1:
   - If arr[i] > max, update max = arr[i]
   - If arr[i] < min, update min = arr[i]
5. Display max and min
6. STOP

### Source Code
```c
#include <stdio.h>
int main(){
    int n, i, max, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    max = arr[0];
    min = arr[0];
    
    for (i = 1; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
        if (arr[i] < min){
            min = arr[i];
        }
    }
    
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    return 0;
}
```

### Sample Output
```text
Enter the number of elements: 5
Enter 5 elements: 25 10 30 5 20
Maximum element = 30
Minimum element = 5

Enter the number of elements: 6
Enter 6 elements: -5 -10 -2 -15 -8 -3
Maximum element = -2
Minimum element = -15

Enter the number of elements: 3
Enter 3 elements: 100 100 100
Maximum element = 100
Minimum element = 100
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practice3"></a>
## 3. Write a C program to find the second largest element from an array (without sorting).

### Algorithm
1. START
2. Read array elements (at least 2 elements required)
3. Initialize first = second = arr[0]
4. For i = 1 to n-1:
   - If arr[i] > first: second = first, first = arr[i]
   - Else if arr[i] > second and arr[i] ≠ first: second = arr[i]
5. Display second largest
6. STOP

### Source Code
```c
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
```

### Sample Output
```text
Enter the number of elements: 5
Enter 5 elements: 10 25 30 15 20
Second largest element = 25

Enter the number of elements: 6
Enter 6 elements: 50 40 60 30 70 45
Second largest element = 60

Enter the number of elements: 4
Enter 4 elements: 10 10 10 10
No second largest element found (all elements are same)
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practice4"></a>
## 4. Write a C program to find the arithmetic mean, variance and standard deviation of any n values.

### Algorithm
1. START
2. Read n values into array
3. Calculate mean: μ = (Σxi) / n
4. Calculate variance: θ = Σ(xi - μ)² / n
5. Calculate standard deviation: σ = √θ
6. Display all three values
7. STOP

### Source Code
```c
#include <stdio.h>
#include <math.h>
int main(){
    int n, i;
    float sum = 0, mean, var = 0, sd;
    printf("Enter the number of values: ");
    scanf("%d", &n);
    float arr[n];
    printf("Enter %d values: ", n);
    for (i = 0; i < n; i++){
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    
    mean = sum / n;
    
    for (i = 0; i < n; i++){
        var += (arr[i] - mean) * (arr[i] - mean);
    }
    var = var / n;

    sd = sqrt(var);

    printf("Mean = %.2f\n", mean);
    printf("Variance = %.2f\n", var);
    printf("Standard Deviation = %.2f\n", sd);
    return 0;
}
```

### Sample Output
```text
Enter the number of values: 5
Enter 5 values: 10 20 30 40 50
Mean (μ) = 30.00
Variance (θ) = 200.00
Standard Deviation (σ) = 14.14

Enter the number of values: 4
Enter 4 values: 2.5 4.5 6.5 8.5
Mean (μ) = 5.50
Variance (θ) = 4.50
Standard Deviation (σ) = 2.12
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practice5"></a>
## 5. Write a C program to search the any elements from an array using binary search technique.

### Algorithm
1. START
2. Read array elements
3. Sort the array using bubble sort
4. Read element to search
5. Binary Search:
   - Set low = 0, high = n-1
   - While low ≤ high:
     - mid = (low + high) / 2
     - If arr[mid] = element: found
     - If arr[mid] < element: low = mid + 1
     - Else: high = mid - 1
6. Display result
7. STOP

### Source Code
```c
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
```

### Sample Output
```text
Enter the number of elements: 6
Enter 6 elements: 30 10 50 20 40 60
Sorted array: 10 20 30 40 50 60
Enter element to search: 40
Element 40 found at position 4

Enter the number of elements: 5
Enter 5 elements: 15 25 5 35 45
Sorted array: 5 15 25 35 45
Enter element to search: 100
Element 100 not found in the array
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practice6"></a>
## 6. Write a C program to sort the all elements of an array in ascending order using modified bubble sort technique.

### Algorithm
1. START
2. Read array elements
3. Modified Bubble Sort:
   - For i = 0 to n-2:
     - Set swapped = 0
     - For j = 0 to n-i-2:
       - If arr[j] > arr[j+1]: swap and set swapped = 1
     - If swapped = 0: break (array is sorted)
4. Display sorted array
5. STOP

### Source Code
```c
#include <stdio.h>
int main(){
    int n, i, j, temp, swapped;
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
    
    for (i = 0; i < n - 1; i++){
        swapped = 0;
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0){
            break; 
        }
    }
    
    printf("Array after modified bubble sort: ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
```

### Sample Output
```text
Enter the number of elements: 5
Enter 5 elements: 64 34 25 12 22
Array before sorting: 64 34 25 12 22
Array after modified bubble sort: 12 22 25 34 64

Enter the number of elements: 6
Enter 6 elements: 1 2 3 4 5 6
Array before sorting: 1 2 3 4 5 6
Array after modified bubble sort: 1 2 3 4 5 6
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practice7"></a>
## 7. Write a C program to sort the all elements of an array in ascending order using insertion sort technique.

### Algorithm
1. START
2. Read array elements
3. Insertion Sort:
   - For i = 1 to n-1:
     - key = arr[i], j = i-1
     - While j ≥ 0 and arr[j] > key:
       - arr[j+1] = arr[j], j = j-1
     - arr[j+1] = key
4. Display sorted array
5. STOP

### Source Code
```c
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
```

### Sample Output
```text
Enter the number of elements: 5
Enter 5 elements: 64 34 25 12 22
Array before sorting: 64 34 25 12 22
Array after insertion sort: 12 22 25 34 64

Enter the number of elements: 6
Enter 6 elements: 5 2 4 6 1 3
Array before sorting: 5 2 4 6 1 3
Array after insertion sort: 1 2 3 4 5 6
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practice8"></a>
## 8. Write a C program to check the frequency of each elements in an array.

### Algorithm
1. START
2. Read array elements
3. Create visited array to track processed elements
4. For each unprocessed element:
   - Count occurrences in remaining array
   - Mark duplicates as visited
   - Display element and its frequency
5. STOP

### Source Code
```c
#include <stdio.h>
int main(){
    int n, i, j, temp, count;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int swapped;
    for (i = 0; i < n - 1; i++){
        swapped = 0;
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
            
    printf("Element frequencies:\n");
    i = 0;
    while (i < n){
        count = 1;
        while (i + count < n && arr[i] == arr[i + count]){
            count++;
        }
        printf("Element %d appears %d time(s)\n", arr[i], count);
        i += count; 
    }
    return 0;
}
```

### Sample Output
```text
Enter the number of elements: 8
Enter 8 elements: 1 2 3 2 1 4 3 2
Element frequencies:
Element 1 appears 2 time(s)
Element 2 appears 3 time(s)
Element 3 appears 2 time(s)
Element 4 appears 1 time(s)

Enter the number of elements: 5
Enter 5 elements: 10 20 10 30 20
Element frequencies:
Element 10 appears 2 time(s)
Element 20 appears 2 time(s)
Element 30 appears 1 time(s)
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practice9"></a>
## 9. Write a C program to delete all duplicate elements from an array.

### Algorithm
1. START
2. Read array elements
3. For each element i:
   - For each element j after i:
     - If arr[i] = arr[j]: remove arr[j] by shifting left
     - Decrease array size, adjust j
4. Display array without duplicates
5. STOP

### Source Code
```c
#include <stdio.h>
int main(){
    int n, i, j, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Original array: ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (arr[i] == arr[j]){
                for (k = j; k < n - 1; k++){
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    
    printf("Array after removing duplicates: ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("New array size: %d\n", n);
    return 0;
}
```

### Sample Output
```text
Enter the number of elements: 8
Enter 8 elements: 1 2 3 2 1 4 3 5
Original array: 1 2 3 2 1 4 3 5
Array after removing duplicates: 1 2 3 4 5
New array size: 5

Enter the number of elements: 6
Enter 6 elements: 10 20 10 30 20 40
Original array: 10 20 10 30 20 40
Array after removing duplicates: 10 20 30 40
New array size: 4
```
<div align="right"><a href="#index">return to index</a></div><hr>
