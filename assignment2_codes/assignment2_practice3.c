// 3. Write a C program to create Simple Calculator using switch case.

#include <stdio.h>
int main(){
    float a, b;
    char op;
    printf("Enter expression(a, operator, b)[operator -> +,-,*,/]: ");
    scanf("%f %c %f", &a, &op, &b);
    switch(op){
        case '+': printf("= %.2f", a + b); break;
        case '-': printf("= %.2f", a - b); break;
        case '*': printf("= %.2f", a * b); break;
        case '/': 
            if (b != 0) printf("= %.2f", a / b); 
            else printf("Divide by zero error!");
            break;
        default: printf("Invalid operator");
    }
    printf("\n");
    return 0;
}