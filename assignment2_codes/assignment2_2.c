#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch((num > 0) - (num < 0)) {
        case 1: printf("Positive"); break;
        case 0: printf("Zero"); break;
        case -1: printf("Negative"); break;
    }
    return 0;
}