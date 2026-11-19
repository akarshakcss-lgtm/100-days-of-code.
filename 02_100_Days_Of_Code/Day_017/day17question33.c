//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int sum = 0;
    int original;

    printf("Enter a number\n");
    scanf("%d", &n);

    original = n;

    while(n > 0)
    {
        int digits = n % 10;
        sum = sum + (int)round(pow(digits, 3));
        n = n / 10;
    }

    printf("sum = %d\n", sum);
    printf("original = %d\n", original);

    if(sum == original)
    {
        printf("It is armstrong number\n");
    }
    else
    {
        printf("It is not armstrong number\n");
    }

    return 0;
}