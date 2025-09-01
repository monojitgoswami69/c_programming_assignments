<h1 align="center">ASSIGNMENT - 4</h1>

<div align="center" id="index">
  <h2> Table of Contents</h2>
</div>

<div align="center">

|  **Assignment Programs** |  **Practice Problems** |
|---|---|
| [**#1** Asterisk Pattern](#assignment1) | [**#P1** Alphabet Pattern (A, BC, CDE...)](#practiceP1) |
| [**#2** Number Pattern](#assignment2) | [**#P2** Reverse Character Pattern (DCBA, CBA...)](#practiceP2) |
| [**#3** Number Triangle Pattern](#assignment3) | [**#P3** Mirrored Alphabet Pattern](#practiceP3) |
| [**#4** Pyramidal Number Pattern](#assignment4) | [**#P4** Star Pyramid Pattern](#practiceP4) |
| [**#5** Pascal Triangle](#assignment5) | [**#P5** Binary Pattern (0101...)](#practiceP5) |
|  | [**#P6** Reverse Number Pattern](#practiceP6) |
|  | [**#P7** Alphabet Descending Pattern](#practiceP7) |
|  | [**#P8** Fixed Binary Pattern](#practiceP8) |

</div>

> ### **Note** - All programs include algorithms, source code, and sample outputs

<hr>

<h1 align="center">Assignment Programs</h1>

<a id="assignment1"></a>
## 1. Write a C program to print the following pattern:

```
* 
* * 
* * * 
* * * * (Up to n numbers of rows)
```

### Algorithm
1. START
2. Prompt the user to enter the number of rows `n`
3. For each row `i` from 1 to `n`:
   - For each column `j` from 1 to `i`:
     - Print an asterisk `*` followed by a space
   - Print a newline character
4. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
```

### Sample Output
```text
Enter the number of rows: 5
* 
* * 
* * * 
* * * * 
* * * * * 
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="assignment2"></a>
## 2. Write a C program to print the following pattern:

```
1 
2 3 
4 5 6 
7 8 9 10 (Up to n numbers of rows)
```

### Algorithm
1. START
2. Prompt the user to enter the number of rows `n`
3. Initialize a counter `num = 1`
4. For each row `i` from 1 to `n`:
   - For each column `j` from 1 to `i`:
     - Print the current number `num` followed by a space
     - Increment `num`
   - Print a newline character
5. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    int n, num = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
```

### Sample Output
```text
Enter the number of rows: 5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="assignment3"></a>
## 3. Write a C program to print the following pattern:

```
      1 
     2 3 
    3 4 5 
   4 5 6 7 (Up to n numbers of row.)
```

### Algorithm
1. START
2. Prompt the user to enter the number of rows `n`
3. For each row `i` from 1 to `n`:
   - Print `(n - i)` spaces for alignment
   - Print numbers starting from `i` to `(2*i - 1)` with spaces
   - Print a newline character
4. STOP

### Source Code
```c
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n - i; k++) {
            printf(" ");
        }
        for (int j = i; j < 2*i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
```

### Sample Output
```text
Enter the number of rows: 4
   1 
  2 3 
 3 4 5 
4 5 6 7 
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="assignment4"></a>
## 4. Write a C program to print digits in following pyramidal form:

```
      1 
    2 3 2 
  3 4 5 4 3 
4 5 6 7 6 5 4 (Up to n numbers of row)
```

### Algorithm
1. START
2. Prompt the user to enter the number of rows `n`
3. For each row `i` from 1 to `n`:
   - Print `2 * (n - i)` spaces for alignment
   - Print numbers in ascending order from `i` to `(2*i - 1)`
   - Print numbers in descending order from `(2*i - 2)` to `i`
   - Print a newline character
4. STOP

### Source Code
```c
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n - i; k++) {
            printf("  ");
        }
        for (int j = i; j < 2*i; j++) {
            printf("%d ", j);
        }
        for (int j = 2*(i-1); j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
```

### Sample Output
```text
Enter the number of rows: 4
      1 
    2 3 2 
  3 4 5 4 3 
4 5 6 7 6 5 4 
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="assignment5"></a>
## 5. Write a C program to print the following pascal triangle:

```
      1 
    1   1 
  1   2   1 
1   3   3   1 (Up to n numbers of row)
```

### Algorithm
1. START
2. Prompt the user to enter the number of rows `n`
3. For each row `i` from 0 to `(n-1)`:
   - Print spaces for alignment: `2 * (n - i)`
   - Initialize coefficient `coef = 1`
   - For each position `j` from 0 to `i`:
     - If `j > 0`, calculate coefficient using: `coef = coef * (i - j + 1) / j`
     - Print the coefficient with width 4
   - Print a newline character
4. STOP

### Source Code
```c
#include <stdio.h>

int main(void) {
  int n;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int space = 0; space <= n - i; space++) {
      printf("  "); 
    }
    int coef = 1; 
    for (int j = 0; j <= i; j++) {
      if (j > 0) {
        coef = coef * (i - j + 1) / j;
      }
      printf("%4d", coef); 
    }
    printf("\n");
  }
  return 0;
}
```

### Sample Output
```text
Enter the number of rows: 5
            1
          1   1
        1   2   1
      1   3   3   1
    1   4   6   4   1
```
<div align="right"><a href="#index">return to index</a></div><hr>


<h1 align="center">Practice Problems</h1>

<a id="practiceP1"></a>
## P1. Write a C program for the following pattern:

```
A
B C
C D E
D E F G
```

### Algorithm
1. START
2. Prompt the user to enter the number of rows `n`
3. Initialize character `ch = 'A'`
4. For each row `i` from 1 to `n`:
   - For each column `j` from 1 to `i`:
     - Print character `ch` and increment it
   - Print a newline character
   - Set `ch = 'A' + i` for next row starting character
5. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
        ch = 'A' + i;
    }
    return 0;
}
```

### Sample Output
```text
Enter the number of rows: 4
A 
B C 
C D E 
D E F G 
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practiceP2"></a>
## P2. Write a C program for the following pattern:

```
D D D D
  C C C
    B B
      A
```

### Algorithm
1. START
2. Prompt the user to enter the number of rows `n`
3. Initialize character `ch = 'A' + n - 1` (starting from last alphabet)
4. For each row `i` from 1 to `n`:
   - Print `(i - 1)` spaces for alignment
   - Print character `ch` repeated `(n - i + 1)` times
   - Print a newline character
   - Decrement `ch` for next row
5. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    char ch = 'A' + n - 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            printf("  ");
        }
        for (int k = 1; k <= n - i + 1; k++) {
            printf("%c ", ch);
        }
        printf("\n");
        ch--;
    }
    return 0;
}
```

### Sample Output
```text
Enter the number of rows: 4
D D D D 
  C C C 
    B B 
      A 
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practiceP3"></a>
## P3. Write a C program for the following pattern:

```
A           A
A B       B A
A B C   C B A
A B C D C B A
```

### Algorithm
1. START
2. Prompt the user to enter the number of rows `n`
3. Initialize character `ch = 'A'`
4. For each row `i` from 1 to `n`:
   - Print ascending sequence from 'A' to current position
   - Calculate gap spaces: `2 * (n - i) - 1`
   - Print gap spaces
   - Print descending sequence (mirrored)
   - Print a newline character
5. STOP

### Source Code
```c
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    char ch = 'A';
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < i; j++){
            printf("%c ", ch + j);
        }
        int gap = 2 * (n - i) - 1; 
        for (int j = 0; j < gap; j++){
            printf("  ");
        }
        int start = (gap <= 0) ? i - 2 : i - 1;
        for (int j = start; j >= 0; j--){
            if (j >= 0) printf("%c ", ch + j);
        }
        printf("\n");
    }
}
```

### Sample Output
```text
Enter the number of rows: 4
A       A 
A B   B A 
A B C B A 
A B C D C B A 
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practiceP4"></a>
## P4. Write a C program for the following pattern:

```
      *
    * * *
  * * * * *
* * * * * * *
```

### Algorithm
1. START
2. Prompt the user to enter the number of rows `n`
3. For each row `i` from 1 to `n`:
   - Print `(n - i)` spaces for alignment
   - Print `(2 * i - 1)` asterisks with spaces
   - Print a newline character
4. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
```

### Sample Output
```text
Enter the number of rows: 4
      * 
    * * * 
  * * * * * 
* * * * * * * 
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practiceP5"></a>
## P5. Write a C program for the following pattern:

```
1
0 1
1 0 1
0 1 0 1
```

### Algorithm
1. START
2. Prompt the user to enter the number of rows `n`
3. For each row `i` from 1 to `n`:
   - Initialize `temp = i % 2` (starting value for the row)
   - For each column `j` from 1 to `i`:
     - Print `(temp++ % 2)` (alternating 0 and 1)
   - Print a newline character
4. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int temp;
    for (int i = 1; i <= n; i++) {
        temp = i % 2;
        for (int j = 1; j <= i; j++) {
            printf("%d ", (temp++ % 2));
        }
        printf("\n");
    }
    return 0;
}
```

### Sample Output
```text
Enter the number of rows: 4
1 
0 1 
1 0 1 
0 1 0 1 
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practiceP6"></a>
## P6. Write a C program for the following pattern:

```
15 14 13 12 11
10 9 8 7
6 5 4
3 2 
1
```

### Algorithm
1. START
2. Prompt the user to enter the number of rows `n`
3. Calculate the starting number: `num = n * (n + 1) / 2` (sum of first n natural numbers)
4. For each row `i` from 1 to `n`:
   - Print `(n - i + 1)` numbers starting from `num` and decrementing
   - Print a newline character
5. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int num = n * (n + 1) / 2;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            printf("%d ", num);
            num--;
        }
        printf("\n");
    }
    return 0;
}
```

### Sample Output
```text
Enter the number of rows: 5
15 14 13 12 11 
10 9 8 7 
6 5 4 
3 2 
1 
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practiceP7"></a>
## P7. Write a C program for the following pattern:

```
D C B A
  C B A
    B A
      A
```

### Algorithm
1. START
2. Prompt the user to enter the number of rows `n`
3. Calculate the starting character: `start = 'A' + n - 1`
4. For each row `i` from 0 to `(n-1)`:
   - Print `i` spaces for alignment
   - Print characters in descending order from `(start - i)` to 'A'
   - Print a newline character
5. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    char start = 'A' + n - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        for (char ch = start - i; ch >= 'A'; ch--) {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}
```

### Sample Output
```text
Enter the number of rows: 4
D C B A 
  C B A 
    B A 
      A 
```
<div align="right"><a href="#index">return to index</a></div><hr>

<a id="practiceP8"></a>
## P8. Write a C program for the following pattern:

```
1 0 1
0 1 0
1 0 1
```

### Algorithm
1. START
2. Prompt the user to enter the number of rows `n`
3. For each row `i` from 1 to `n`:
   - Initialize `temp = i % 2` (starting value for the row)
   - Print exactly 3 numbers with alternating 0 and 1 pattern
   - Print a newline character
4. STOP

### Source Code
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int temp;
    for (int i = 1; i <= n; i++) {
        temp = i % 2;
        for (int j = 1; j <= 3; j++) {
            printf("%d ", (temp++ % 2));
        }
        printf("\n");
    }
    return 0;
}
```

### Sample Output
```text
Enter the number of rows: 3
1 0 1 
0 1 0 
1 0 1 
```
<div align="right"><a href="#index">return to index</a></div><hr>
