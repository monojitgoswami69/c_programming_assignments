#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    switch(a > b) {
        case 1: printf("Max = %d", a); break;
        case 0: printf("Max = %d", b); break;
    }
    return 0;
}