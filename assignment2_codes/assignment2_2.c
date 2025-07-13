// Write a C program to check whether a number is positive, negative or zero using switch case

 // approach 1
 #include <stdio.h>
 int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch (num > 0){
        case 1: printf("Positive\n"); break;
        case 0:
            switch (num<0){
                case 1: printf("Negetive\n"); break;
                case 0: printf("Zero\n"); break;
            }
    }
 }

/* 
approach 2
#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch((num > 0) - (num < 0)) {
        case 1: printf("Positive\n"); break;
        case 0: printf("Zero\n"); break;
        case -1: printf("Negative\n"); break;
    }
    return 0;
}
*/
