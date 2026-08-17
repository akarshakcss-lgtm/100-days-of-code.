//Q16: Write a program to input three numbers and find the largest among them using if–else.
/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include<stdio.h>
int main()
{
    int n1;
    int n2;
    int n3;
    printf("enter first number\n");
    scanf("%d",&n1);
    printf("enter second number\n");
    scanf("%d",&n2);
    printf("enter third number\n");
    scanf("%d",&n3);
    if(n1>n2 &&  n1>n3)
    {
        printf("largest is=%d\n",n1);
    }
    else if(n2>n1 && n2>n3)
    {
        printf("largest is=%d\n",n2);
    }
    else
    {
        printf("largest is=%d\n",n3);
    }
    return 0;
}