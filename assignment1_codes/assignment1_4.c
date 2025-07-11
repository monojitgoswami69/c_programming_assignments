#include <stdio.h>
int main() {
    int a, b, temp;
    scanf("%d %d", &a, &b);
    temp = a; a = b; b = temp;
    printf("With 3rd var: %d %d\n", a, b);
    a = a + b; b = a - b; a = a - b;
    printf("Without 3rd var: %d %d\n", a, b);
    return 0;
}