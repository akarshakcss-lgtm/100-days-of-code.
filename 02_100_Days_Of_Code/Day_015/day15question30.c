//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include<stdio.h>
int main()
{
    int n ;
    printf("enter a number:");
    scanf("%d", &n);
    int reverse = 0;
    while(n != 0)
    {
        int d = n%10;
        reverse = reverse*10 + d;
        n = n/10;
    }
  
    printf("%d\n",reverse);
    return 0 ;
}