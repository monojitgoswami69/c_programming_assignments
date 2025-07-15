/*5. A student’s grade is calculated in a subject according to the following rules:

Marks Obtained      Grade
>=90 and <=100        O
>=80 and <90          E
>=70 and <80          A
>=60 and <70          B
>=50 and <60          C
>=40 and <50          D
<40 and >=0F        FAILED
Other Numbers      INVALID

Write a C Program which accept a student’s marks as an input and then determine the grade of the students in that subject
USING SWITCH-CASE
*/

#include <stdio.h>
int main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    switch(marks / 10) {
        case 10: case 9: 
            printf("Grade: O"); break;
        case 8: printf("Grade: E"); break;
        case 7: printf("Grade: A"); break;
        case 6: printf("Grade: B"); break;
        case 5: printf("Grade: C"); break;
        case 4: printf("Grade: D"); break;
        case 3: case 2: case 1: case 0: 
            printf("Grade: F (FAILED)"); 
            break;
        default: printf("INVALID");
    }
    printf("\n");
    return 0;
}