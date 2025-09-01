// 5. Write a C program to find HCF (GCD) and LCM of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, hcf, lcm, i;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    for (i = (num1 < num2 ? num1 : num2); i >= 1; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
            break;
        }
    }
    lcm = (num1 * num2) / hcf;
    printf("HCF of %d and %d = %d\n", num1, num2, hcf);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);
    return 0;
}