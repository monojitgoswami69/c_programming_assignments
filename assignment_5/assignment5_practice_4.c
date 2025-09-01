// P4. Write a C program to find the arithmetic mean, variance and standard deviation of any n values.

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
