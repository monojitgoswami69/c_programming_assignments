#include <stdio.h>
int main() {
    float basic, da, hra, gross;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    da = 0.74 * basic;
    hra = 0.15 * basic;
    gross = basic + da + hra;
    printf("Gross Salary = %.2f", gross);
    return 0;
}