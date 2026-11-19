//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include<stdio.h>
int main (){
    float f;
    float c;
    printf("enter the temperature in celsius\n");
    scanf("%f", &c);
   f = (c*9.0/5.0)+32;
   printf("the temperature in fahrenheit %.2f",f);
   return 0;
}