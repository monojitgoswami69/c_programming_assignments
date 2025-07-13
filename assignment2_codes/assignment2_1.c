// 1. Write a C program to check whether an alphabet is vowel or consonant using switch case.

#include <stdio.h>
int main(){
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))){
        printf("invalid input\n");
        return 0;
    }
    switch(ch){
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Vowel\n");
            break;
        default:
            printf("Consonant\n");
    }
    return 0;
}