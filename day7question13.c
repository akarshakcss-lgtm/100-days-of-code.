//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/
#include<stdio.h>
int main()
{
    int y;
    printf("enter a year\n");
    scanf("%d", &y);
    if(y%400==0)
    {
        printf("It is a leap year\n");
    }
    else if(y%100==0)
    {
        printf("It is not a leap year\n");
    }
    else if(y%4==0)
    {
        printf("It is  a leap year\n");
    }
    else   
        printf("It is not a leap year\n");
    return 0 ;
}