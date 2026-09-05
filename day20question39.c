//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include<stdio.h>
int main ()
{
    int n ;
    int product = 1;
     printf("enter number \n");
     scanf("%d", &n);
    while(n>0)
    {
        int digit = n % 10;
        if(digit % 2 != 0)
        {
            product *= digit;
        }
        n /= 10;
    }

     printf("product of odd digits is %d", product);
     return 0;
}