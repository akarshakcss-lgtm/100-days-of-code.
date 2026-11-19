//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include<stdio.h>

int main()
{
    int n, s = 0, factorial, digit;
    int original;

    printf("Enter a number:\n");
    scanf("%d", &n);

    original = n;

    while(n > 0)
    {
        digit = n % 10;
        factorial = 1;

        for(int i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        s = s + factorial;
        n = n / 10;
    }

    if(s == original)
    {
        printf("It is a strong number\n");
    }
    else
    {
        printf("It is not a strong number\n");
    }

    return 0;
}