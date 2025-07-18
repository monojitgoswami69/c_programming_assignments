//4. Write a C program to print all alphabets from a to z.

#include <stdio.h>
int main() {
    printf("All alphabets from a to z:\n");
    for (char ch = 'a'; ch <= 'z'; ch++) printf("%c ", ch);
    printf("\n\nAll alphabets from A to Z:\n");
    for (char ch = 'A'; ch <= 'Z'; ch++) printf("%c ", ch);
    printf("\n");
    return 0;
}
