// 4. Write a C program to calculate and print electricity bill for consumer @Rs.3.75 per unit, given the following information: previous meter reading and current reading.

#include <stdio.h>
int main(){
    int prev, curr;
    float unit, bill;
    printf("Enter previous and current meter readings: ");
    scanf("%d %d", &prev, &curr);
    unit = curr - prev;
    bill = unit * 3.75;
    printf("Total Bill = Rs. %.2f\n", bill);
    return 0;
}