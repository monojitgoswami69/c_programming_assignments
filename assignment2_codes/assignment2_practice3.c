#include <stdio.h>
int main() {
    float a, b;
    char op;
    printf("Enter expression (a op b): ");
    scanf("%f %c %f", &a, &op, &b);
    switch(op) {
        case '+': printf("= %.2f", a + b); break;
        case '-': printf("= %.2f", a - b); break;
        case '*': printf("= %.2f", a * b); break;
        case '/': 
            if (b != 0) printf("= %.2f", a / b); 
            else printf("Divide by zero error!");
            break;
        default: printf("Invalid operator");
    }
    return 0;
}