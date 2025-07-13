/* 1. Write a C Program for following…
An electric distribution companies arranges its domestic consumer as follows:

Consumption   Rate of charge
in Units 

0 – 200       Rs. 0.50 per unit
201 - 400     Rs. 100 plus Rs. 0.65 per unit excess to 200
401 - 600     Rs. 250 plus Rs. 0.80 per unit excess to 400
Above 600     Rs. 425 plus Rs. 1.25 per unit excess to 600

*/

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