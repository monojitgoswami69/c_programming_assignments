// P4. Write a C program to calculate and print electricity bill for consumer @Rs.3.75 per unit, given the following information: previous meter reading and current reading.

#include <stdio.h>
int main(){
    int prev, curr;
    float unit, bill;
    printf("Enter previous and current meter readings: ");
    scanf("%d %d", &prev, &curr);
    if(curr < prev) {
        printf("Error: Current reading cannot be less than previous reading.\n");
        return 1;
    }
    unit = curr - prev;
    bill = unit * 3.75;
    printf("Units consumed: %.0f\n", unit);
    printf("Total Bill = Rs. %.2f\n", bill);
    return 0;
}