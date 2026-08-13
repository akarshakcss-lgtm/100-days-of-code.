 //Q6: Write a program to swap two numbers using a third variable.
/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1
*/
#include<stdio.h>
int main (){
  int n1;
  int n2;
  printf("enter number\n");
  scanf("%d", &n1);
  printf("enter second number\n");
  scanf("%d", &n2);
  int swap = n2;
  n2=n1;
  n1=swap;
  printf("after swap %d %d",n1,n2);
  return 0;
}