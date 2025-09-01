// P1. Mr. Sayan Ghosh is an employee of a Private Firm. His Basic is Rs. 5500/-. Now the dearness allowance is 74% of his basic salary and house rent allowance is 15% of basic salary. Write a program to calculate his gross salary. [Though his basic salary is given, do this program where basic is taken through keyboard].

#include <stdio.h>
int main(){
    float basic, da, hra, gross;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    da = 0.74 * basic;
    hra = 0.15 * basic;
    gross = basic + da + hra;
    printf("Gross Salary = %.2f\n", gross);
    return 0;
}