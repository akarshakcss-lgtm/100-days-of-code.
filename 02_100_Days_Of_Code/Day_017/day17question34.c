//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include<stdio.h>
int main ()
{
int n ;
 printf("enter a number\n");
 scanf("%d", &n);
 for(int i=2; i<=n/2; i++)
 {
    if(n%i==0)
    {
        printf("The number is not prime\n");
        return 0;
    }
 }
 printf("The number is prime\n");
 return 0;
}
 