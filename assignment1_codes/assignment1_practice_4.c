#include <stdio.h>
int main() {
    int prev, curr;
    float unit, bill;
    printf("Enter previous and current meter readings: ");
    scanf("%d %d", &prev, &curr);
    unit = curr - prev;
    bill = unit * 3.75;
    printf("Total Bill = Rs. %.2f", bill);
    return 0;
}