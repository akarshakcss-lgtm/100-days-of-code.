//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

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
  for(int i =1 ;; i++)
  {
    if(i%n1==0 && i%n2==0)
    {
        printf("LCM is %d\n", i);
        break;
    }
  }
  return 0;
}