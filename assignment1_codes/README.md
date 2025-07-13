<h1 align = "center" > ASSIGNMENT - 1  </h1>

<div align= "center" id="toc">
  <ul style="list-style: none">
    <summary>
      <h1>Index</h1>
    </summary>
  </ul>
</div>

### Assignment 
1. [Write a C program to enter two numbers and find their sum.](https://github.com/monojitgoswami69/C_programming_assignments/tree/main/assignment1_codes#1-write-a-c-program-to-enter-two-numbers-and-find-their-sum)
2. [Write a C program to enter two numbers and perform all arithmetic operations (+, -, *, / and %)](https://github.com/monojitgoswami69/C_programming_assignments/tree/main/assignment1_codes#2-write-a-c-program-to-enter-two-numbers-and-perform-all-arithmetic-operations------and-)
3. [Write a C program to enter length and breadth of a rectangle and radius of a circle. Find perimeter and area of rectangle and circumference and area of circle.](https://github.com/monojitgoswami69/C_programming_assignments/tree/main/assignment1_codes#3-write-a-c-program-to-enter-length-and-breadth-of-a-rectangle-and-radius-of-a-circle-find-perimeter-and-area-of-rectangle-and-circumference-and-area-of-circle)
4. [Write a C program to swap two numbers. (with and without third variable)](https://github.com/monojitgoswami69/C_programming_assignments/tree/main/assignment1_codes#4-write-a-c-program-to-swap-two-numbers-with-and-without-third-variable)
5. [Write a C program to find maximum between three numbers using nested if-else.](https://github.com/monojitgoswami69/C_programming_assignments/tree/main/assignment1_codes#5-write-a-c-program-to-find-maximum-between-three-numbers-using-nested-if-else)
6. [Write a C program to check whether a number is even or odd using if-else statement.](https://github.com/monojitgoswami69/C_programming_assignments/tree/main/assignment1_codes#6-write-a-c-program-to-check-whether-a-number-is-even-or-odd-using-if-else-statement)
7. [Write a C program to check whether a year is leap or not using if-else statement.](https://github.com/monojitgoswami69/C_programming_assignments/tree/main/assignment1_codes#7-write-a-c-program-to-check-whether-a-year-is-leap-or-not-using-if-else-statement)
8. [Write a C program to find all roots of a quadratic equation ax² + bx + c = 0 for all possible combinations of a, b and c.](https://github.com/monojitgoswami69/C_programming_assignments/tree/main/assignment1_codes#8-write-a-c-program-to-find-all-roots-of-a-quadratic-equation-ax--bx--c--0-for-all-possible-combinations-of-a-b-and-c)

### Practice Codes
1. [Mr. Sayan Ghosh is an employee of a Private Firm. His Basic is Rs. 5500/-. Now the dearness allowance is 74% of his basic salary and house rent allowance is 15% of basic salary. Write a program to calculate his gross salary (take user input).](https://github.com/monojitgoswami69/C_programming_assignments/tree/main/assignment1_codes#1-mr-sayan-ghosh-is-an-employee-of-a-private-firm-his-basic-is-rs-5500--now-the-dearness-allowance-is-74-of-his-basic-salary-and-house-rent-allowance-is-15-of-basic-salary-write-a-program-to-calculate-his-gross-salary-though-his-basic-salary-is-given-do-this-program-where-basic-is-taken-through-keyboard)
2. [The length and breadth of a rectangle and radius of a circle are input through keyboard. Write a program to calculate the area and perimeter of the rectangle, and the area and the circumference of the circle.](https://github.com/monojitgoswami69/C_programming_assignments/tree/main/assignment1_codes#2-the-length-and-breadth-of-a-rectangle-and-radius-of-a-circle-are-input-through-keyboard-write-a-program-to-calculate-the-area-and-perimeter-of-the-rectangle-and-the-area-and-the-circumference-of-the-circle)
3. [Write a C program to find area of a triangle. Area of triangle = √s(s−a)(s−b)(s−c), where a, b and c are three sides of the triangle and s = (a + b + c) / 2.](https://github.com/monojitgoswami69/C_programming_assignments/tree/main/assignment1_codes#3-write-a-c-program-to-find-area-of-a-triangle-area-of-triangle--ssasbsc-where-a-b-and-c-are-three-sides-of-the-triangle-and-s--a--b--c--2)
4. [Write a C program to calculate and print electricity bill for consumer @Rs.3.75 per unit, given the following information: previous meter reading and current reading.](https://github.com/monojitgoswami69/C_programming_assignments/tree/main/assignment1_codes#4-write-a-c-program-to-calculate-and-print-electricity-bill-for-consumer-rs375-per-unit-given-the-following-information-previous-meter-reading-and-current-reading)

<hr>

## 1. Write a C program to enter two numbers and find their sum.

### Algorithm
1. START
2. Prompt the user to enter two integers `a` and `b`
3. Read and store the input values `a` and `b`
4. Calculate the sum, `sum = a + b`
5. Display the result `sum`
6. STOP

### Source Code
```c
#include <stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);
    return 0;
}
```

### Sample Output
```text
Enter two numbers: 10 20
Sum = 30

Enter two numbers: -5 12
Sum = 7

Enter two numbers: 0 0
Sum = 0

Enter two numbers: -100 -250
Sum = -350

// int overflow testcase
Enter two numbers: 2147483647 1
Sum = -2147483648
```
<div align="right"><a href="#index">return to index</a></div><hr>

## 2. Write a C program to enter two numbers and perform all arithmetic operations (+, -, *, / and %)

### Algorithm
1. START  
2. Prompt the user to enter two integers `a` and `b`  
3. Read and store the input values `a` and `b`  
4. Perform addition: `a + b`  
5. Perform subtraction: `a - b`  
6. Perform multiplication: `a * b`  
7. Perform division: `a / b` (typecast to float)  
8. Perform modulus: `a % b`  
9. Display all results  
10. STOP
### Source Code
```c
#include <stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d x %d = %d\n", a, b, a * b);
    printf("%d / %d = %f\n", a, b, (float)a / b);
    printf("%d %% %d = %d\n", a, b, a % b);
    return 0;
}
```
### Sample Output
```text
Enter two numbers: 10 3
10 + 3 = 13
10 - 3 = 7
10 x 3 = 30
10 / 3 = 3.333333
10 % 3 = 1

Enter two numbers: 20 -5
20 + -5 = 15
20 - -5 = 25
20 x -5 = -100
20 / -5 = -4.000000
20 % -5 = 0

Enter two numbers: 0 7
0 + 7 = 7
0 - 7 = -7
0 x 7 = 0
0 / 7 = 0.000000
0 % 7 = 0
```
<div align="right"><a href="#index">return to index</a></div><hr>

## 3. Write a C program to enter length and breadth of a rectangle and radius of a circle. Find perimeter and area of rectangle and circumference and area of circle.

### Algorithm
1. START  
2. Prompt the user to enter `length` and `breadth` of a rectangle  
3. Prompt the user to enter `radius` of a circle  
4. Calculate:
   - Area of rectangle = `length * breadth`  
   - Perimeter of rectangle = `2 * (length + breadth)`  
   - Area of circle = `π * r * r`  
   - Circumference of circle = `2 * π * r`  
5. Display all results  
6. STOP

### Source Code
```c
#include <stdio.h>
int main(){
    float l, b, r;
    const float PI = 3.1416;
    printf("Enter length, breadth and radius: ");
    scanf("%f %f %f", &l, &b, &r);
    printf("Rectangle - Area: %.2f, Perimeter: %.2f\n", l * b, 2 * (l + b));
    printf("Circle - Area: %.2f, Circumference: %.2f\n", PI * r * r, 2 * PI * r);
    return 0;
}
```

### Sample Output
```text
Enter length, breadth and radius: 10 5 7
Rectangle - Area: 50.00, Perimeter: 30.00
Circle - Area: 153.94, Circumference: 43.98

Enter length, breadth and radius: 6.5 3.2 4
Rectangle - Area: 20.80, Perimeter: 19.40
Circle - Area: 50.27, Circumference: 25.13

Enter length, breadth and radius: 0 0 10
Rectangle - Area: 0.00, Perimeter: 0.00
Circle - Area: 314.16, Circumference: 62.83
```
<div align="right"><a href="#index">return to index</a></div><hr>

## 4. Write a C program to swap two numbers. (with and without third variable)

### Algorithm
1. START  
2. Prompt the user to enter two integers `a` and `b`  
3. Swap using third variable:  
   - `temp = a`  
   - `a = b`  
   - `b = temp`  
4. Display swapped values (with third variable)  
5. Swap again without third variable:  
   - `a = a + b`  
   - `b = a - b`  
   - `a = a - b`  
6. Display swapped values (without third variable)  
7. STOP

### Source Code
```c
#include <stdio.h>
int main(){
    int a, b, temp;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a; a = b; b = temp;
    printf("With 3rd var: %d %d\n", a, b);
    a = a + b; b = a - b; a = a - b;
    printf("Without 3rd var: %d %d\n", a, b);
    return 0;
}
```

### Sample Output
```text
Enter the two numbers: 5 10
With 3rd var: 10 5
Without 3rd var: 5 10

Enter the two numbers: 0 7
With 3rd var: 7 0
Without 3rd var: 0 7

Enter the two numbers: -3 12
With 3rd var: 12 -3
Without 3rd var: -3 12
```
<div align="right"><a href="#index">return to index</a></div><hr>

## 5. Write a C program to find maximum between three numbers using nested if-else.

### Algorithm
1. START  
2. Prompt the user to enter three integers `a`, `b`, and `c`  
3. If `a > b`, then:  
   - If `a > c`, then `a` is the maximum  
   - Else `c` is the maximum  
4. Else:  
   - If `b > c`, then `b` is the maximum  
   - Else `c` is the maximum  
5. Display the maximum number  
6. STOP

### Source Code
```c
#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    // using ternary(one liner) -> max = a>b?(a>c?a:c):b>c?b:c;
    if(a > b) {
        if(a > c) printf("Max = %d", a);
        else printf("Max = %d\n", c);
    } else {
        if(b > c) printf("Max = %d", b);
        else printf("Max = %d\n", c);
    }
    return 0; 
}
```

### Sample Output
```text
Enter 3 numbers: 10 20 30
Max = 30

Enter 3 numbers: 100 25 50
Max = 100

Enter 3 numbers: -5 -10 -2
Max = -2
```
<div align="right"><a href="#index">return to index</a></div><hr>
 
## 6. Write a C program to check whether a number is even or odd using if-else statement.

### Algorithm
1. START  
2. Prompt the user to enter an integer `n`  
3. Check if `n % 2 == 0`  
   - If true, print "Even"  
   - Else, print "Odd"  
4. STOP

### Source Code
```c
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n % 2 == 0) printf("Even\n");
    else printf("Odd\n");
    return 0;
}
```

### Sample Output
```text
Enter a number: 10
Even

Enter a number: 7
Odd

Enter a number: 0
Even
```
<div align="right"><a href="#index">return to index</a></div><hr>
 
## 7. Write a C program to check whether a year is leap or not using if-else statement.

### Algorithm
1. START  
2. Prompt the user to enter an integer `y` representing the year  
3. Check the leap year conditions:  
   - If `(y % 4 == 0 && y % 100 != 0)` OR `(y % 400 == 0)`, then it's a leap year  
   - Else, it's not a leap year  
4. Display the result  
5. STOP

### Source Code
```c
#include <stdio.h>
int main(){
    int y;
    printf("Enter a year: ");
    scanf("%d", &y);
    if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) printf("Leap Year\n");
    else printf("Not a Leap Year\n");
    return 0;
}
```

### Sample Output
```text
Enter a year: 2020
Leap Year

Enter a year: 1900
Not a Leap Year

Enter a year: 2000
Leap Year
```
<div align="right"><a href="#index">return to index</a></div><hr>
 
## 8. Write a C program to find all roots of a quadratic equation ax² + bx + c = 0 for all possible combinations of a, b and c.

### Algorithm
1. START  
2. Display the format: `ax² + bx + c = 0`  
3. Prompt the user to enter coefficients `a`, `b`, and `c`  
4. Compute discriminant: `disc = b² - 4ac`  
5. If `disc > 0`, compute two **real and unequal** roots:  
   - `root1 = (-b + √disc) / (2a)`  
   - `root2 = (-b - √disc) / (2a)`  
6. Else if `disc == 0`, compute one **real and equal** root:  
   - `root = -b / (2a)`  
7. Else compute two **imaginary** roots:  
   - `real = -b / (2a)`  
   - `imag = √(-disc) / (2a)`  
   - Roots: `real ± imag*i`  
8. Display the result  
9. STOP

### Source Code
```c
#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, disc, root1, root2;
    printf("Format of the equation is ax^2 + bx + c = 0\n");
    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    disc = b*b - 4*a*c;
    if(disc > 0) {
        root1 = (-b + sqrt(disc)) / (2*a);
        root2 = (-b - sqrt(disc)) / (2*a);
        printf("Real and Unequal Roots: %.2f, %.2f\n", root1, root2);
    } else if(disc == 0) {
        root1 = -b / (2*a);
        printf("Real and Equal Root: %.2f\n", root1);
    } else {
        float real = -b / (2*a);
        float imag = sqrt(-disc) / (2*a);
        printf("Imaginary Roots: %.2f ± %.2fi\n", real, imag);
    }
    return 0;
}
```

### Sample Output
```text
Format of the equation is ax^2 + bx + c = 0
Enter a, b and c: 1 -5 6
Real and Unequal Roots: 3.00, 2.00

Format of the equation is ax^2 + bx + c = 0
Enter a, b and c: 1 -6 9
Real and Equal Root: 3.00

Format of the equation is ax^2 + bx + c = 0
Enter a, b and c: 2 3 5
Imaginary Roots: -0.75 ± 1.39i
```
<div align="right"><a href="#index">return to index</a></div><hr>


<h1 align="center"> Practice Codes </h1>


## 1. Mr. Sayan Ghosh is an employee of a Private Firm. His Basic is Rs. 5500/-. Now the dearness allowance is 74% of his basic salary and house rent allowance is 15% of basic salary. Write a program to calculate his gross salary. [Though his basic salary is given, do this program where basic is taken through keyboard].

### Algorithm
1. START  
2. Prompt the user to enter the **basic salary**  
3. Calculate:  
   - Dearness Allowance (DA) = 74% of basic → `0.74 * basic`  
   - House Rent Allowance (HRA) = 15% of basic → `0.15 * basic`  
   - Gross Salary = `basic + DA + HRA`  
4. Display the gross salary  
5. STOP

### Source Code
```c
#include <stdio.h>
int main(){
    float basic, da, hra, gross;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    da = 0.74 * basic;
    hra = 0.15 * basic;
    gross = basic + da + hra;
    printf("Gross Salary = %.2f\n", gross);
    return 0;
}
```

### Sample Output
```text
Enter basic salary: 5500
Gross Salary = 10472.50

Enter basic salary: 3000
Gross Salary = 5715.00

Enter basic salary: 7500
Gross Salary = 14242.50

```
<div align="right"><a href="#index">return to index</a></div><hr>
 
## 2. The length and breadth of a rectangle and radius of a circle are input through keyboard. Write a program to calculate the area and perimeter of the rectangle, and the area and the circumference of the circle.

### Algorithm
1. START  
2. Prompt the user to enter `length` and `breadth` of a rectangle  
3. Prompt the user to enter `radius` of a circle  
4. Calculate:  
   - Area of rectangle = `length * breadth`  
   - Perimeter of rectangle = `2 * (length + breadth)`  
   - Area of circle = `π * r * r`  
   - Circumference of circle = `2 * π * r`  
5. Display all the results  
6. STOP

### Source Code
```c
#include <stdio.h>
int main(){
    float l, b, r;
    const float PI = 3.1416;
    printf("Enter length, breadth and radius: ");
    scanf("%f %f %f", &l, &b, &r);
    printf("Rectangle - Area: %.2f, Perimeter: %.2f\n", l*b, 2*(l+b));
    printf("Circle - Area: %.2f, Circumference: %.2f\n", PI*r*r, 2*PI*r);
    return 0;
}
```

### Sample Output
```text
Enter length, breadth and radius: 10 5 7
Rectangle - Area: 50.00, Perimeter: 30.00
Circle - Area: 153.94, Circumference: 43.98

Enter length, breadth and radius: 6.5 3.2 4
Rectangle - Area: 20.80, Perimeter: 19.40
Circle - Area: 50.27, Circumference: 25.13

Enter length, breadth and radius: 0 0 10
Rectangle - Area: 0.00, Perimeter: 0.00
Circle - Area: 314.16, Circumference: 62.83

```
<div align="right"><a href="#index">return to index</a></div><hr>
 
## 3. Write a C program to find area of a triangle. Area of triangle = √s(s−a)(s−b)(s−c), where a, b and c are three sides of the triangle and s = (a + b + c) / 2.

### Algorithm
1. START  
2. Prompt the user to enter the three sides of the triangle: `a`, `b`, `c`  
3. Calculate the semi-perimeter: `s = (a + b + c) / 2`  
4. Apply Heron's formula:  
   - `area = √(s * (s - a) * (s - b) * (s - c))`  
5. Display the calculated area  
6. STOP

### Source Code
```c
#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, s, area;
    printf("Enter the three sides: ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s*(s - a)*(s - b)*(s - c));
    printf("Area of triangle = %.2f\n", area);
    return 0;
}
```

### Sample Output
```text
Enter the three sides: 3 4 5
Area of triangle = 6.00

Enter the three sides: 7.5 10.2 8
Area of triangle = 29.52

Enter the three sides: 6 6 6
Area of triangle = 15.59
```
<div align="right"><a href="#index">return to index</a></div><hr>
 
## 4. Write a C program to calculate and print electricity bill for consumer @Rs.3.75 per unit, given the following information: previous meter reading and current reading.

### Algorithm
1. START  
2. Prompt the user to enter the **previous** and **current** meter readings  
3. Calculate the number of units consumed: `unit = current - previous`  
4. Compute the bill amount: `bill = unit * 3.75`  
5. Display the total bill  
6. STOP

### Source Code
```c
#include <stdio.h>
int main(){
    int prev, curr;
    float unit, bill;
    printf("Enter previous and current meter readings: ");
    scanf("%d %d", &prev, &curr);
    unit = curr - prev;
    bill = unit * 3.75;
    printf("Total Bill = Rs. %.2f\n", bill);
    return 0;
}
```

### Sample Output
```text
Enter previous and current meter readings: 1250 1400
Total Bill = Rs. 562.50

Enter previous and current meter readings: 800 860
Total Bill = Rs. 225.00

Enter previous and current meter readings: 4320 4500
Total Bill = Rs. 675.00
```
<div align="right"><a href="#index">return to index</a></div><hr>
