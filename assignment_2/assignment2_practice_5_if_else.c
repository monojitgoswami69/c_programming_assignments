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
USING IF-ELSE-IF
*/

#include <stdio.h>
int main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks>100) printf("INVALID");
    else if(marks >= 90) printf("Grade: O");
    else if(marks >= 80) printf("Grade: E");
    else if(marks >= 70) printf("Grade: A");
    else if(marks >= 60) printf("Grade: B");
    else if(marks >= 50) printf("Grade: C");
    else if(marks >= 40) printf("Grade: D");
    else if(marks >= 0) printf("Grade: F (FAILED)");
    else printf("INVALID");
    printf("\n");
    return 0;
}