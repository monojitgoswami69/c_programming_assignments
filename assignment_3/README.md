<h1 align="center">ASSIGNMENT - 3</h1>

<div align="center" id="index">
  <h2> Table of Contents</h2>
</div>

<div align="center">

|  **Assignment Programs** |  **Practice Problems** |
|---|---|
| [**#1** Natural Numbers & Sum](#assignment1) | [**#1** Swap First & Last Digits](#practice1) |
| [**#2** Palindrome Number Checker](#assignment2) | [**#2** Count Digits & Sum & Product](#practice2) |
| [**#3** Find All Factors](#assignment3) | [**#3** Multiplication Table](#practice3) |
| [**#4** Factorial Calculator](#assignment4) | [**#4** Print Alphabets](#practice4) |
| [**#5** HCF & LCM Calculator](#assignment5) | [**#5** Odd & Even Numbers Sum](#practice5) |
| [**#6** Prime Number Checker](#assignment6) | [**#6** Prime Factors](#practice6) |
| [**#7** Print Prime Numbers](#assignment7) | [**#7** Series Calculator](#practice7) |
| [**#8** Armstrong Number Checker](#assignment8) | [**#8** Power Calculator](#practice8) |
| [**#9** Perfect Number Checker](#assignment9) | [**#9** Armstrong Numbers in Range](#practice9) |
| [**#10** Strong Number Checker](#assignment10) | [**#10** Perfect Numbers in Range](#practice10) |
| [**#11** Fibonacci Series](#assignment11) | [**#11** Strong Numbers in Range](#practice11) |
| [**#12** Harmonic Series](#assignment12) | [**#12** Cos Series Calculator](#practice12) |
| [**#13** Sin Series Calculation](#assignment13) | [**#13** Fibonacci in Range](#practice13) |
|  | [**#14** Binary-Decimal Converter](#practice14) |

</div>

---

> ### **Note** - All programs include algorithms, source code, and sample outputs. This assignment focuses on loops, number manipulation, and mathematical algorithms.

<hr>

<h1 align="center">Assignment Programs</h1>

<a id="assignment1"></a>
## 1. Write a C program to print natural numbers from 1 to n and also print their sum.

### Algorithm
1. START
2. Accept a positive integer `n`
3. Initialize sum `s = 0`
4. Use a for loop from `i = 1` to `n`:
   - Print `i`
   - Add `i` to sum: `s = s + i`
5. Print the total sum
6. STOP

### Source Code
```c
#include <stdio.h>
int main(){
    int n, i, s = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Natural numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++){
        printf("%d ", i);
        s += i;
    }
    printf("\nSum of natural numbers from 1 to %d = %d\n", n, s);
    return 0;
}
```

### Sample Output
```text
Enter n: 5
Natural numbers from 1 to 5:
1 2 3 4 5 
Sum of natural numbers from 1 to 5 = 15

Enter n: 1
Natural numbers from 1 to 1:
1 
Sum of natural numbers from 1 to 1 = 1

Enter n: 10
Natural numbers from 1 to 10:
1 2 3 4 5 6 7 8 9 10 
Sum of natural numbers from 1 to 10 = 55
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="assignment2"></a>
## 2. Write a C program to check whether a number is palindrome or not.

### Algorithm
1. START
2. Accept an integer `num`
3. Store original number in `temp`
4. Initialize `rev = 0`
5. If `num < 0`, it's not a palindrome
6. While `num ≠ 0`:
   - Extract last digit: `rem = num % 10`
   - Build reverse: `rev = rev * 10 + rem`
   - Remove last digit: `num = num / 10`
7. Compare `temp` with `rev`
8. Display result
9. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    int num, temp, rev = 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &num);
    temp = num;
    if (num < 0) {
        printf("%d is not a palindrome.\n", num);
        return 0;
    }
    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if (temp == rev) printf("%d is a palindrome.\n", temp);
    else printf("%d is not a palindrome.\n", temp);
    return 0;
}
```

### Sample Output
```text
Enter an integer: 121
121 is a palindrome.

Enter an integer: 123
123 is not a palindrome.

Enter an integer: -121
-121 is not a palindrome.
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="assignment3"></a>
## 3. Write a C program to find all factors of a number.

### Algorithm
1. START
2. Accept a positive integer `num`
3. Use a for loop from `i = 1` to `num`:
   - If `num % i == 0`, then `i` is a factor
   - Print `i`
4. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);    
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
```

### Sample Output
```text
Enter a number: 12
Factors of 12 are: 1 2 3 4 6 12

Enter a number: 7
Factors of 7 are: 1 7

Enter a number: 1
Factors of 1 are: 1
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="assignment4"></a>
## 4. Write a C program to calculate factorial of a number.

### Algorithm
1. START
2. Accept a non-negative integer `n`
3. Initialize `factorial = 1`
4. If `n < 0`, display error message
5. Else, use for loop from `i = 1` to `n`:
   - Multiply: `factorial = factorial * i`
6. Display the factorial
7. STOP

### Source Code
```c
#include <stdio.h>

int main() {
    int n, i;
    int factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) printf("Factorial is not defined for negative numbers.\n");
    else {
        for (i = 1; i <= n; i++) factorial *= i;
        printf("Factorial of %d = %d\n", n, factorial);
    }
    return 0;
}
```

### Sample Output
```text
Enter a number: 5
Factorial of 5 = 120

Enter a number: 0
Factorial of 0 = 1

Enter a number: -3
Factorial is not defined for negative numbers.
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="assignment5"></a>
## 5. Write a C program to find HCF (GCD) and LCM of two numbers.

### Algorithm
1. START
2. Accept two positive integers `num1` and `num2`
3. Find HCF using the iterative method:
   - Start from minimum of `num1` and `num2`
   - Find largest number that divides both
4. Calculate LCM using formula: `LCM = (num1 * num2) / HCF`
5. Display both HCF and LCM
6. STOP

### Source Code
```c
#include <stdio.h>

int main() {
    int num1, num2, hcf, lcm, i;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    for (i = (num1 < num2 ? num1 : num2); i >= 1; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
            break;
        }
    }
    lcm = (num1 * num2) / hcf;
    printf("HCF of %d and %d = %d\n", num1, num2, hcf);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);
    return 0;
}
```

### Sample Output
```text
Enter two numbers: 12 18
HCF of 12 and 18 = 6
LCM of 12 and 18 = 36

Enter two numbers: 15 25
HCF of 15 and 25 = 5
LCM of 15 and 25 = 75

Enter two numbers: 7 13
HCF of 7 and 13 = 1
LCM of 7 and 13 = 91
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="assignment6"></a>
## 6. Write a C program to check whether a number is Prime number or not.

### Algorithm
1. START
2. Accept a number `n`
3. Initialize `flag = 1` (assuming it's prime)
4. If `n ≤ 1`, set `flag = 0`
5. Else, check divisibility from `i = 2` to `√n`:
   - If `n % i == 0`, set `flag = 0` and break
6. If `flag == 1`, it's prime; else not prime
7. STOP

### Source Code
```c
#include <stdio.h>

int main() {
    int n, i, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) flag = 0; 
    else{
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }
    }
    if (flag) printf("%d is a prime number.\n", n);
    else printf("%d is not a prime number.\n", n);  
    return 0;
}
```

### Sample Output
```text
Enter a number: 17
17 is a prime number.

Enter a number: 15
15 is not a prime number.

Enter a number: 2
2 is a prime number.
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="assignment7"></a>
## 7. Write a C program to print all prime numbers between 1 to n.

### Algorithm
1. START
2. Accept upper limit `n`
3. For each number from 2 to n:
   - Check if it's prime using nested loop
   - If prime, print the number
4. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    int n, i, j, flag;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Prime numbers between 1 and %d are:\n", n);
    for (i = 2; i <= n; i++) {
        flag = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
```

### Sample Output
```text
Enter n: 20
Prime numbers between 1 and 20 are:
2 3 5 7 11 13 17 19
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="assignment8"></a>
## 8. Write a C program to check whether a number is Armstrong number or not.

### Algorithm
1. START
2. Accept a number `num`
3. Count the number of digits in `num`
4. Calculate sum of each digit raised to power of total digits
5. Compare result with original number
6. If equal, it's an Armstrong number
7. STOP

### Source Code
```c
#include <stdio.h>
#include <math.h>
int main() {
    int num, temp, rem, res = 0, len = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0){
        temp /= 10;
        len++;
    }
    temp = num;
    while (temp != 0){
        rem = temp % 10;
        res += pow(rem, len);
        temp /= 10;
    }
    if (res == num) printf("%d is an Armstrong number.\n", num);
    else printf("%d is not an Armstrong number.\n", num);
    return 0;
}
```

### Sample Output
```text
Enter a number: 153
153 is an Armstrong number.

Enter a number: 123
123 is not an Armstrong number.

Enter a number: 371
371 is an Armstrong number.
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="assignment9"></a>
## 9. Write a C program to check whether a number is Perfect number or not.

### Algorithm
1. START
2. Accept a positive number `num`
3. Initialize `sum = 0`
4. Find all proper divisors (from 1 to num-1)
5. Add divisors to sum
6. If sum equals the original number, it's perfect
7. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("%d is not a perfect number.\n", num);
        return 0;
    }
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) printf("%d is a perfect number.\n", num);
    else printf("%d is not a perfect number.\n", num);
    return 0;
}
```

### Sample Output
```text
Enter a number: 6
6 is a perfect number.

Enter a number: 8
8 is not a perfect number.
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="assignment10"></a>
## 10. Write a C program to check whether a number is Strong number or not.

### Algorithm
1. START
2. Accept a number `num`
3. Initialize `sum = 0`
4. For each digit in the number:
   - Calculate factorial of the digit
   - Add factorial to sum
5. If sum equals original number, it's strong
6. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    int num, temp, digit, sum = 0, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (num > 0) {
        digit = num % 10;
        fact = 1;
        for (int i = 1; i <= digit; i++) fact *= i;
        sum += fact;
        num /= 10;
    }
    if (temp == sum) printf("%d is a strong number.\n", temp);
    else printf("%d is not a strong number.\n", temp);
    return 0;
}
```

### Sample Output
```text
Enter a number: 145
145 is a strong number.

Enter a number: 123
123 is not a strong number.
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="assignment11"></a>
## 11. Write a C program to print Fibonacci series up to n terms.

### Algorithm
1. START
2. Accept number of terms `n`
3. Initialize first two terms: `a = 0, b = 1`
4. Print first two terms if n ≥ 1 and n ≥ 2
5. For remaining terms, calculate: `c = a + b`
6. Update: `a = b, b = c`
7. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    int n, i, a = 0, b = 1, c;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series up to %d terms:\n", n);
    if (n >= 1) printf("%d ", a);
    if (n >= 2) printf("%d ", b);
    for (i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b; b = c;
    }
    printf("\n");
    return 0;
}
```

### Sample Output
```text
Enter number of terms: 8
Fibonacci series up to 8 terms:
0 1 1 2 3 5 8 13
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="assignment12"></a>
## 12. Write a C program to find value of series: y = 1 + 1/2 + 1/3 + ... + 1/n.

### Algorithm
1. START
2. Accept number of terms `n`
3. Initialize `sum = 0.0`
4. For each term from 1 to n:
   - Add `1/i` to sum
5. Display the sum
6. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    int n, i;
    float sum = 0.0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) sum += 1.0 / i;
    printf("Sum of series = %.6f\n", sum);
    return 0;
}
```

### Sample Output
```text
Enter the value of n: 5
Sum of series = 2.283333
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="assignment13"></a>
## 13. Write a C program to find value of sin series.

### Algorithm
1. START
2. Accept value of x (in radians) and number of terms n
3. Initialize sum = 0, sign = 1
4. For each term, calculate: x^(2i-1) / (2i-1)!
5. Alternate signs for each term
6. Add to sum and display result
7. STOP

### Source Code
```c
#include <stdio.h>
#include <math.h>
int main() {
    double x, term, sum = 0.0;
    int n, i, sign = 1;
    float factorial = 1;
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        int exponent = 2*i-1;
        if (i == 1) factorial = 1;
        else factorial *= (2*i-2) * (2*i-1);
        term = sign * pow(x, exponent) / factorial;
        sum += term;
        sign *= -1;
    }
    printf("Value of sin series: %f", sum);
    return 0;
}
```

### Sample Output
```text
Enter the value of x (in radians): 1.57
Enter number of terms: 5
Value of sin series: 1.000000
```
<div align="right"><a href="#index">return to index</a></div><hr>

<h1 align="center">Practice Problems</h1>

<a id="practice1"></a>
## 1. Write a C program to swap first and last digits of a number.

### Algorithm
1. START
2. Accept a number `num`
3. Count total digits in the number
4. Extract first digit using division by power of 10
5. Extract last digit using modulus operation
6. Reconstruct number with swapped digits
7. Display the result
8. STOP

### Source Code
```c
#include <stdio.h>
#include <math.h>
int main() {
    int num, temp, len = 0, first, last;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        len++;
        temp /= 10;
    }
    first = num / pow(10, len-1);
    last = num % 10;
    int multiplier = pow(10, len-1);    
    num%=multiplier;
    num/=10;
    num = last * multiplier + num * 10 + first;
    printf("Number after swapping first and last digits: %d\n", num);
    return 0;
}
```

### Sample Output
```text
Enter a number: 12345
Number after swapping first and last digits: 52341

Enter a number: 123
Number after swapping first and last digits: 321

Enter a number: 5
Number after swapping first and last digits: 5

Enter a number: 987654
Number after swapping first and last digits: 487659
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practice2"></a>
## 2. Write a C program to count number of digits in a number and also their sum and product.

### Algorithm
1. START
2. Accept a number `num`
3. Initialize count = 0, sum = 0, product = 1
4. While num > 0:
   - Extract digit: `digit = num % 10`
   - Increment count, add to sum, multiply to product
   - Remove last digit: `num /= 10`
5. Display count, sum, and product
6. STOP

### Source Code
```c
#include <stdio.h>

int main() {
    int num, digits = 0, sum = 0, product = 1, digit;
    printf("Enter a number: ");
    scanf("%d", &num);    
    while (num > 0) {
        digit = num % 10;
        digits++;
        sum += digit;
        product *= digit;
        num /= 10;
    }
    printf("Number of digits: %d\n", digits);
    printf("Sum of digits: %d\n", sum);
    printf("Product of digits: %d\n", product);
    return 0;
}
```

### Sample Output
```text
Enter a number: 12345
Number of digits: 5
Sum of digits: 15
Product of digits: 120

Enter a number: 987
Number of digits: 3
Sum of digits: 24
Product of digits: 504

Enter a number: 1
Number of digits: 1
Sum of digits: 1
Product of digits: 1
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practice3"></a>
## 3. Write a C program to print multiplication table of any number.

### Algorithm
1. START
2. Accept a number and range
3. Use for loop to multiply number by each value from 1 to range
4. Display the multiplication table
5. STOP

### Source Code
```c
#include <stdio.h>

int main() {
    int num, range;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the range for multiplication table: ");
    scanf("%d", &range);
    printf("\nMultiplication table of %d:\n", num);
    printf("-------------------------\n");
    for (int i = 1; i <= range; i++) printf("%d x %d = %d\n", num, i, num * i);
    return 0;
}
```

### Sample Output
```text
Enter a number: 5
Enter the range for multiplication table: 10

Multiplication table of 5:
-------------------------
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practice4"></a>
## 4. Write a C program to print all alphabets from a to z.

### Algorithm
1. START
2. Use for loop with character variable from 'a' to 'z'
3. Print each character
4. Repeat for uppercase A to Z
5. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    printf("All alphabets from a to z:\n");
    for (char ch = 'a'; ch <= 'z'; ch++) printf("%c ", ch);
    printf("\n\nAll alphabets from A to Z:\n");
    for (char ch = 'A'; ch <= 'Z'; ch++) printf("%c ", ch);
    printf("\n");
    return 0;
}
```

### Sample Output
```text
All alphabets from a to z:
a b c d e f g h i j k l m n o p q r s t u v w x y z 

All alphabets from A to Z:
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practice5"></a>
## 5. Write a C program to print all odd and even numbers between 1 to n and also print their sum.

### Algorithm
1. START
2. Accept upper limit `n`
3. Print all odd numbers and calculate their sum
4. Print all even numbers and calculate their sum
5. Display both sums
6. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    int n, osum = 0, esum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Odd numbers between 1 to %d: ", n);
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
        osum+=i;
    }
    printf("\n\nEven numbers between 1 to %d: ", n);
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
        esum+=i;
    }
    printf("\n\nSum of odd numbers: %d\n", osum);
    printf("Sum of even numbers: %d", esum);
    return 0;
}
```

### Sample Output
```text
Enter the value of n: 10
Odd numbers between 1 to 10: 1 3 5 7 9 

Even numbers between 1 to 10: 2 4 6 8 10 

Sum of odd numbers: 25
Sum of even numbers: 30
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practice6"></a>
## 6. Write a C program to find all prime factors of a number.

### Algorithm
1. START
2. Accept a number `num`
3. Create helper function to check if a number is prime
4. For each factor of the number, check if it's prime
5. If both conditions are true, it's a prime factor
6. STOP

### Source Code
```c
#include <stdio.h>

// Simple function to check if a number is prime
int checkPrime(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Prime factors of %d are: ", num);
    for (int i = 2; i <= num; i++) {
        if (num % i == 0 && checkPrime(i)) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
```

### Sample Output
```text
Enter a number: 60
Prime factors of 60 are: 2 3 5
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practice7"></a>
## 7. Write a C program to find value of series: y = 1 + x^2/2! + x^3/3! + ... + x^n/n!.

### Algorithm
1. START
2. Accept values of x and n
3. Initialize y = 1.0 and term = x
4. For each term from 2 to n:
   - Calculate term = term * x / i
   - Add term to y
5. Display the result
6. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    int x, n;
    double y = 1.0; 
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    double term = x;  
    for (int i = 2; i <= n; i++) {
        term = term * x / i;  
        y += term;
    }
    printf("Value of the series y = %.6f\n", y);
    return 0;
}
```

### Sample Output
```text
Enter the value of x: 2
Enter the number of terms (n): 5
Value of the series y = 7.266667
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practice8"></a>
## 8. Write a C program to find power of a number using for loop.

### Algorithm
1. START
2. Accept base and exponent
3. Initialize result = 1
4. Use for loop to multiply base exponent times
5. Display the result
6. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    int base, exponent, result = 1;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    for (int i = 1; i <= exponent; i++) result *= base;
    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}
```

### Sample Output
```text
Enter base: 2
Enter exponent: 5
2^5 = 32
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practice9"></a>
## 9. Write a C program to print all Armstrong numbers between 1 to n.

### Algorithm
1. START
2. Accept upper limit `n`
3. For each number from 1 to n:
   - Check if it's Armstrong using helper functions
   - If Armstrong, print the number
4. STOP

### Source Code
```c
#include <stdio.h>
#include <math.h>
int countDigits(int num) {
    int count = 0;
    while (num > 0){
        count++; 
        num /= 10;
    }
    return count;
}
int isArmstrong(int num) {
    int temp = num, sum = 0, digits;
    digits = countDigits(num);
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return (sum == num);
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Armstrong numbers between 1 to %d are:\n", n);
    for (int i = 1; i <= n; i++) if (isArmstrong(i)) printf("%d ", i);
    printf("\n");
    return 0;
}
```

### Sample Output
```text
Enter the value of n: 1000
Armstrong numbers between 1 to 1000 are:
1 153 371 407
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practice10"></a>
## 10. Write a C program to print all Perfect numbers between 1 to n.

### Algorithm
1. START
2. Accept upper limit `n`
3. For each number from 1 to n:
   - Check if it's perfect using helper function
   - If perfect, print the number
4. STOP

### Source Code
```c
#include <stdio.h>
int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) sum += i;
    }
    return (sum == num);
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Perfect numbers between 1 to %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        if (isPerfect(i)) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
```

### Sample Output
```text
Enter the value of n: 100
Perfect numbers between 1 to 100 are:
6 28
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practice11"></a>
## 11. Write a C program to print all Strong numbers between 1 to n.

### Algorithm
1. START
2. Accept upper limit `n`
3. For each number from 1 to n:
   - Check if it's strong using helper functions
   - If strong, print the number
4. STOP

### Source Code
```c
#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}
int isStrong(int num) {
    int temp = num, sum = 0;   
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return (sum == num);
}
int main() {
    int n;   
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Strong numbers between 1 to %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        if (isStrong(i)) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
```

### Sample Output
```text
Enter the value of n: 200
Strong numbers between 1 to 200 are:
1 2 145
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practice12"></a>
## 12. Write a C program to find value of cos series.

### Algorithm
1. START
2. Accept value of x (in radians) and number of terms n
3. Initialize cos = 1.0 and term = 1.0
4. For each term, calculate alternating cosine series
5. Display the result
6. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    double x, cos = 1.0;
    int n;   
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    double term = 1.0;  
    for (int i = 1; i < n; i++) {
        term = term * (-x * x) / ((2 * i - 1) * (2 * i));
        cos += term;   
    }
    printf("Value of cos(%.2f) = %.6f\n", x, cos);
    return 0;
}
```

### Sample Output
```text
Enter the value of x (in radians): 1.57
Enter the number of terms: 10
Value of cos(1.57) = 0.000008
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practice13"></a>
## 13. Write a C program to print Fibonacci series within a certain range.

### Algorithm
1. START
2. Accept starting and ending range
3. Initialize first two Fibonacci numbers
4. Generate Fibonacci numbers and print only those within range
5. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    int start, end, a = 0, b = 1, c;
    printf("Enter the starting range: ");
    scanf("%d", &start);
    printf("Enter the ending range: ");
    scanf("%d", &end);
    printf("Fibonacci series between %d and %d:\n", start, end);
    if (a >= start && a <= end) printf("%d ", a);
    if (b >= start && b <= end) printf("%d ", b);
    c = a + b;
    while (c <= end) {
        if (c >= start) printf("%d ", c);
        a = b;
        b = c;
        c = a + b;
    }
    printf("\n");
    return 0;
}
```

### Sample Output
```text
Enter the starting range: 5
Enter the ending range: 50
Fibonacci series between 5 and 50:
5 8 13 21 34

Enter the starting range: 1
Enter the ending range: 10
Fibonacci series between 1 and 10:
1 1 2 3 5 8

Enter the starting range: 0
Enter the ending range: 20
Fibonacci series between 0 and 20:
0 1 1 2 3 5 8 13
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practice14"></a>
## 14. Write a C program to convert binary to decimal number and decimal to binary number.

### Algorithm
1. START
2. Accept user choice for conversion type
3. For binary to decimal: Extract digits and multiply by powers of 2
4. For decimal to binary: Repeatedly divide by 2 and store remainders
5. Display the converted result
6. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    int choice, decimal, binary, rem, base = 1, result = 0;
    printf("Choose conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter binary number: ");
            scanf("%d", &binary);
            while (binary > 0) {
                rem = binary % 10;
                result += rem * base;
                binary /= 10;
                base *= 2;
            }
            printf("Decimal equivalent: %d\n", result);
            break;
        case 2:
            printf("Enter decimal number: ");
            scanf("%d", &decimal);
            printf("Binary equivalent: ");
            if (decimal == 0) printf("0");
            else {
                int binary_digits[32];
                int i = 0;
                while (decimal > 0) {
                    binary_digits[i] = decimal % 2;
                    decimal /= 2;
                    i++;
                }
                for (int j = i - 1; j >= 0; j--) printf("%d", binary_digits[j]);
            }
            printf("\n");
            break;
        default: printf("Invalid choice!\n");
    }
    
    return 0;
}
```

### Sample Output
```text
Choose conversion type:
1. Binary to Decimal
2. Decimal to Binary
Enter your choice: 1
Enter binary number: 1010
Decimal equivalent: 10

Choose conversion type:
1. Binary to Decimal
2. Decimal to Binary
Enter your choice: 2
Enter decimal number: 10
Binary equivalent: 1010

Choose conversion type:
1. Binary to Decimal
2. Decimal to Binary
Enter your choice: 3
Invalid choice!
```
<div align="right"><a href="#index">return to index</a></div><hr>


