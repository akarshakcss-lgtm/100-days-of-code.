//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include<stdio.h>
int main()
{
 int num ,  s=0;
 printf("enter a number:\n");
 scanf("%d", &num);
int i=1;
 while(i<num)
 {
    if(num%i==0)
    {
        s=s+i;
    }
    i++;
 }
 if(s==num)
 {
    printf("perfect number\n");
 }
 else
 {
    printf("not perfect number\n");
 }
 return 0 ;
}