//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include<stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int odd_number = 2 * i - 1; 
        sum += odd_number;
    }
    printf("%d\n", sum);
    return 0 ;
}