//14. Write a C program to convert binary to decimal number and decimal to binary number.

#include <stdio.h>
int main() {
    int choice, decimal, binary, rem, base = 1, result = 0;
    printf("Choose conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter binary number: ");
            scanf("%d", &binary);
            while (binary > 0) {
                rem = binary % 10;
                result += rem * base;
                binary /= 10;
                base *= 2;
            }
            printf("Decimal equivalent: %d\n", result);
            break;
        case 2:
            printf("Enter decimal number: ");
            scanf("%d", &decimal);
            printf("Binary equivalent: ");
            if (decimal == 0) printf("0");
            else {
                int binary_digits[32];
                int i = 0;
                while (decimal > 0) {
                    binary_digits[i] = decimal % 2;
                    decimal /= 2;
                    i++;
                }
                for (int j = i - 1; j >= 0; j--) printf("%d", binary_digits[j]);
            }
            printf("\n");
            break;
        default: printf("Invalid choice!\n");
    }
    
    return 0;
}
