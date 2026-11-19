//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include<stdio.h>
int main ()
{
  int n1 ;
  int n2 ;
  printf("enter first number\n");
  scanf("%d", &n1);
  printf("enter second number\n");
  scanf("%d", &n2);
  while(n1!=n2)
  {
    if(n1>n2)
    {
      n1 = n1 - n2;
    }
    else
    {
      n2 = n2 - n1;
    }
  }
  printf("HCF is %d\n", n1);
 return 0 ;
}