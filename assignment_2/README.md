<h1 align="center">ASSIGNMENT - 2</h1>

<div align="center" id="index">
  <h2> Table of Contents</h2>
</div>

<div align="center">

|  **Assignment Programs** |  **Practice Problems** |
|---|---|
| [**#1** Vowel/Consonant Checker (Switch-Case)](#1-write-a-c-program-to-check-whether-an-alphabet-is-vowel-or-consonant-using-switch-case) | [**#1** Electric Bill Calculator](#1-electric-bill-calculator) |
| [**#2** Positive/Negative/Zero Checker (Switch-Case)](#2-write-a-c-program-to-check-whether-a-number-is-positive-negative-or-zero-using-switch-case) | [**#2** Even/Odd Checker (Switch-Case)](#2-write-a-c-program-to-check-whether-a-number-is-even-or-odd-using-switch-case-statement) |
| [**#3.1** Function Calculator (If-Else-If)](#31-using-if-else-if) | [**#3** Simple Calculator (Switch-Case)](#3-write-a-c-program-to-create-simple-calculator-using-switch-case) |
| [**#3.2** Function Calculator (Switch-Case)](#32-using-switch-case) | [**#4** Maximum of Two Numbers (Switch-Case)](#4-write-a-c-program-to-find-maximum-between-two-numbers-using-switch-case) |
| [**#4** Maximum of Three Numbers (Ternary)](#4-write-a-c-program-to-find-maximum-between-three-numbers-using-logical-operator-and-ternary-operator) | [**#5.1** Student Grade Calculator (If-Else-If)](#51-using-if-else-if) |
|  | [**#5.2** Student Grade Calculator (Switch-Case)](#52-using-switch-case) |

</div>

---

> ### **Note** - All programs include algorithms, source code, and sample outputs

<hr>

<h1 align="center">Assignment Programs</h1>

## 1. Write a C program to check whether an alphabet is vowel or consonant using switch case.

### Algorithm

1. START
2. Accept an alphabet `ch`
3. If `ch` is not an alphabet, print "invalid input" and STOP
4. Use switch-case to check if `ch` is a vowel
5. If yes, print "Vowel"
6. Else, print "Consonant"
7. STOP

### Source Code

```c
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
```

### Sample Output

```
Enter an alphabet: e
Vowel
```

<div align="right"><a href="#index">return to index</a></div><hr>

## 2. Write a C program to check whether a number is positive, negative or zero using switch case

### Algorithm

1. START
2. Accept a number `num`
3. Evaluate `num > 0` using switch-case:
   * If case 1 (true): Print "Positive"
   * If case 0 (false): Evaluate `num < 0` using nested switch-case:
     * If case 1 (true): Print "Negative"  
     * If case 0 (false): Print "Zero"
4. STOP

### Source Code

```c
#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch (num > 0){
        case 1: printf("Positive\n"); break;
        case 0:
            switch (num < 0){
                case 1: printf("Negative\n"); break;
                case 0: printf("Zero\n"); break;
            }
    }
    return 0;
}
```

### Sample Outputs

```
Enter a number: -34
Negative

Enter a number: 0
Zero

Enter a number: 12
Positive
```

<div align="right"><a href="#index">return to index</a></div><hr>

## 3. Write a C program to calculate the value of Y using:

### **Function Definition:**
```
y(x,n) = {1 + x²  when n = 1
         {1 + x/n when n = 2  
         {1 + 2*x when n = 3
         {1 + n*x when n>3 or n<1
```

## 3.1 Using If-Else-If

### Algorithm

1. START
2. Accept `x` (float) and `n` (int)
3. If `n == 1`, compute `y = 1 + x²`
4. Else if `n == 2`, compute `y = 1 + x/n`
5. Else if `n == 3`, compute `y = 1 + 2*x`
6. Else, compute `y = 1 + n*x`
7. Display `y`
8. STOP

### Source Code

```c
#include <stdio.h>
int main(){
    int n;
    float x, y;
    printf("Enter x and n: ");
    scanf("%f %d", &x, &n);
    if(n == 1) y = 1 + x*x;
    else if(n == 2) y = 1 + x/n;
    else if(n == 3) y = 1 + 2*x;
    else y = 1 + n*x;
    printf("Y = %.2f\n", y);
    return 0;
}
```

### Sample Outputs

```
Enter x and n: 2 1
Y = 5.00

Enter x and n: 8 2
Y = 5.00

Enter x and n: 3 6
Y = 19.00
```

<div align="right"><a href="#index">return to index</a></div>

## 3.2 Using Switch-Case

### Algorithm

1. START
2. Accept `x` (float) and `n` (int)
3. Use switch-case:
   * case 1: `y = 1 + x²`
   * case 2: `y = 1 + x/n`
   * case 3: `y = 1 + 2*x`
   * default: `y = 1 + n*x`
4. Display `y`
5. STOP

### Source Code

```c
#include <stdio.h>
int main(){
    int n;
    float x, y;
    printf("Enter x and n: ");
    scanf("%f %d", &x, &n);
    switch(n){
        case 1: y = 1 + x*x; break;
        case 2: y = 1 + x/n; break;
        case 3: y = 1 + 2*x; break;
        default: y = 1 + n*x;
    }
    printf("Y = %.2f\n", y);
    return 0;
}
```

### Sample Outputs

```
Enter x and n: 3 1
Y = 10.00

Enter x and n: 8 2
Y = 5.00

Enter x and n: 3 4
Y = 13.00
```

<div align="right"><a href="#index">return to index</a></div><hr>

## 4. Write a C program to find maximum between three numbers using logical operator and ternary operator

### Algorithm

1. START
2. Accept three integers: `a`, `b`, `c`
3. Use ternary operator with logical operators:
   * Condition: `(a > b && a > c) ? a : (b > c ? b : c)`
   * If `a > b && a > c` is true, `max = a`
   * Else, evaluate `b > c ? b : c`
     * If `b > c` is true, `max = b`
     * Else, `max = c`
4. Display `max`
5. STOP

### Source Code

```c
#include <stdio.h>
int main(){
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max = (a > b && a > c) ? a : (b > c ? b : c);
    printf("Max = %d\n", max);
    return 0;
}
```

### Sample Outputs

```
Enter three numbers: 5 20 9
Max = 20

Enter three numbers: 17 8 29
Max = 29

Enter three numbers: 10 10 10
Max = 10
```

<div align="right"><a href="#index">return to index</a></div><hr>

<h1 align="center"> Practice Programs</h1>

## 1. Electric Bill Calculator

**Problem Statement:** An electric distribution company arranges its domestic consumer billing as follows:

| Consumption (Units) | Rate of Charge                        |
|---------------------|---------------------------------------|
| 0 – 200             | Rs. 0.50 per unit                     |
| 201 – 400           | Rs. 100 + Rs. 0.65 per unit over 200  |
| 401 – 600           | Rs. 250 + Rs. 0.80 per unit over 400  |
| Above 600           | Rs. 425 + Rs. 1.25 per unit over 600  |

**Task:** Write a C Program to calculate and print the amount to be paid by consumer.

### Algorithm

1. START
2. Accept the number of units consumed as `units`
3. If `units <= 200`, calculate `amount = units * 0.5`
4. Else if `units <= 400`, calculate `amount = 100 + (units - 200) * 0.65`
5. Else if `units <= 600`, calculate `amount = 250 + (units - 400) * 0.80`
6. Else, calculate `amount = 425 + (units - 600) * 1.25`
7. Display `amount`
8. STOP

### Source Code

```c
#include <stdio.h>
int main(){
    int units;
    float amount;
    printf("Enter units consumed: ");
    scanf("%d", &units);
    if(units <= 200) amount = units * 0.5;
    else if(units <= 400) amount = 100 + (units - 200) * 0.65;
    else if(units <= 600) amount = 250 + (units - 400) * 0.80;
    else amount = 425 + (units - 600) * 1.25;
    printf("Bill = Rs. %.2f\n", amount);
    return 0;
}
```

### Sample Outputs

```
Enter units consumed: 120
Bill = Rs. 60.00

Enter units consumed: 280
Bill = Rs. 152.00

Enter units consumed: 500
Bill = Rs. 330.00

Enter units consumed: 750
Bill = Rs. 612.50
```

<div align="right"><a href="#index">return to index</a></div><hr>

## 2. Write a C program to check whether a number is even or odd using switch-case statement

### Algorithm

1. START
2. Accept a number `num`
3. Evaluate `num % 2` using switch-case
4. If case `0`, print "Even"
5. If case `1`, print "Odd"
6. STOP

### Source Code

```c
#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch(num % 2){
        case 0: printf("Even\n"); break;
        case 1: printf("Odd\n"); break;
    }
    return 0;
}
```

### Sample Outputs

```
Enter a number: 44
Even

Enter a number: 13
Odd
```

<div align="right"><a href="#index">return to index</a></div><hr>

## 3. Write a C program to create Simple Calculator using switch case.

### Algorithm

1. START
2. Accept two float numbers `a` and `b` and an operator `op`
3. Use switch-case on `op`:
   * If `+`, calculate `a + b`
   * If `-`, calculate `a - b`
   * If `*`, calculate `a * b`
   * If `/`, check if `b != 0`, then calculate `a / b` else print error
   * Else print "Invalid operator"
4. Display result
5. STOP

### Source Code

```c
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
```

### Sample Outputs

```
Enter expression(a, operator, b)[operator -> +,-,*,/]: 5 + 3
= 8.00

Enter expression(a, operator, b)[operator -> +,-,*,/]: 10 / 0
Divide by zero error!

Enter expression(a, operator, b)[operator -> +,-,*,/]: 4 * 2
= 8.00
```

<div align="right"><a href="#index">return to index</a></div><hr>

## 4. Write a C program to find maximum between two numbers using switch case

### Algorithm

1. START
2. Accept two integers `a` and `b`
3. Compare `a > b` and switch on the result:
   * Case 1: Print `a` as maximum
   * Case 0: Print `b` as maximum
4. STOP

### Source Code

```c
#include <stdio.h>
int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    switch(a > b){
        case 1: printf("Max = %d\n", a); break;
        case 0: printf("Max = %d\n", b); break;
    }
    return 0;
}
```

### Sample Outputs

```
Enter two numbers: 12 8
Max = 12

Enter two numbers: 45 78
Max = 78

Enter two numbers: 33 33
Max = 33
```

<div align="right"><a href="#index">return to index</a></div><hr>

## 5. Student Grade Calculator

**Problem Statement:** A student's grade is calculated in a subject according to the following rules:

| Marks Obtained       | Grade        |
|----------------------|--------------|
| 90 – 100             | O            |
| 80 – 89              | E            |
| 70 – 79              | A            |
| 60 – 69              | B            |
| 50 – 59              | C            |
| 40 – 49              | D            |
| 0 – 39               | F (FAILED)   |
| Others (Invalid)     | INVALID      |

**Task:** Write a C Program which accepts a student's marks as input and determines the grade of the student in that subject.

## 5.1 Using If-Else-If

### Algorithm

1. START
2. Accept integer input `marks`
3. Validate input range (0-100)
4. If `marks > 100`, display "INVALID"
5. Else if `marks >= 90`, assign grade "O"
6. Else if `marks >= 80`, assign grade "E"  
7. Else if `marks >= 70`, assign grade "A"
8. Else if `marks >= 60`, assign grade "B"
9. Else if `marks >= 50`, assign grade "C"
10. Else if `marks >= 40`, assign grade "D"
11. Else if `marks >= 0`, assign grade "F (FAILED)"
12. Else, display "INVALID"
13. Display the grade
14. STOP

### Source Code

```c
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
```

### Sample Outputs

```
Enter marks: 91
Grade: O

Enter marks: 78
Grade: A

Enter marks: 53
Grade: C

Enter marks: 12
Grade: F (FAILED)

Enter marks: 121
INVALID
```

<div align="right"><a href="#index">return to index</a></div><hr>

## 5.2 Using Switch-Case

### Algorithm

1. START
2. Accept integer input `marks`
3. Calculate `marks / 10` to get tens digit
4. Use `switch(marks / 10)` to determine grade:
   * Case 10 or 9: Grade = "O"
   * Case 8: Grade = "E"
   * Case 7: Grade = "A"
   * Case 6: Grade = "B"
   * Case 5: Grade = "C"
   * Case 4: Grade = "D"
   * Case 0-3: Grade = "F (FAILED)"
   * Default: Grade = "INVALID"
5. Display the grade
6. STOP

### Source Code

```c
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
```

### Sample Outputs

```
Enter marks: 91
Grade: O

Enter marks: 78
Grade: A

Enter marks: 53
Grade: C

Enter marks: 12
Grade: F (FAILED)

Enter marks: 121
INVALID
```

<div align="right"><a href="#index">return to index</a></div><hr>
